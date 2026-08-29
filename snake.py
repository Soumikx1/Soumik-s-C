#!/usr/bin/env python3
"""
Classic Snake Game
Use arrow keys to move, 'q' to quit
"""

import random
import curses
import time


def main(stdscr):
    # Setup
    curses.curs_set(0)  # Hide cursor
    stdscr.nodelay(1)   # Non-blocking input
    stdscr.timeout(100) # Refresh delay (ms)

    # Get screen dimensions
    sh, sw = stdscr.getmaxyx()

    # Create game window (leave room for border)
    win = curses.newwin(sh - 2, sw - 2, 1, 1)
    win.keypad(1)
    win.timeout(100)
    win.box()

    # Snake initial position (center of screen)
    snake = [
        [sh // 2, sw // 2],
        [sh // 2, sw // 2 - 1],
        [sh // 2, sw // 2 - 2]
    ]

    # Initial food position
    food = [sh // 2, sw // 2 + 5]

    # Direction (start moving right)
    key = curses.KEY_RIGHT

    score = 0

    while True:
        # Get next key press
        next_key = win.getch()
        key = key if next_key == -1 else next_key

        # Prevent 180-degree turns
        if key == curses.KEY_DOWN and snake[0][0] < snake[1][0]:
            key = curses.KEY_UP
        elif key == curses.KEY_UP and snake[0][0] > snake[1][0]:
            key = curses.KEY_DOWN
        elif key == curses.KEY_LEFT and snake[0][1] > snake[1][1]:
            key = curses.KEY_RIGHT
        elif key == curses.KEY_RIGHT and snake[0][1] < snake[1][1]:
            key = curses.KEY_LEFT

        # Calculate new head position
        new_head = [snake[0][0], snake[0][1]]

        if key == curses.KEY_DOWN:
            new_head[0] += 1
        elif key == curses.KEY_UP:
            new_head[0] -= 1
        elif key == curses.KEY_LEFT:
            new_head[1] -= 1
        elif key == curses.KEY_RIGHT:
            new_head[1] += 1

        # Check for collisions with walls
        if (new_head[0] <= 0 or new_head[0] >= sh - 2 or
            new_head[1] <= 0 or new_head[1] >= sw - 2):
            break

        # Check for collision with self
        if new_head in snake:
            break

        # Insert new head
        snake.insert(0, new_head)

        # Check if food is eaten
        if snake[0] == food:
            score += 10
            # Generate new food position
            while food in snake:
                food = [random.randint(1, sh - 3), random.randint(1, sw - 3)]
        else:
            # Remove tail if no food eaten
            snake.pop()

        # Draw game
        win.clear()
        win.box()

        # Draw snake
        for i, segment in enumerate(snake):
            if i == 0:
                win.addch(segment[0], segment[1], '@')  # Head
            else:
                win.addch(segment[0], segment[1], 'o')  # Body

        # Draw food
        win.addch(food[0], food[1], '*')

        # Draw score
        score_str = f" Score: {score} "
        win.addstr(0, 2, score_str)

        win.refresh()

    # Game over screen
    stdscr.clear()
    msg1 = "GAME OVER!"
    msg2 = f"Final Score: {score}"
    msg3 = "Press 'r' to restart or 'q' to quit"

    stdscr.addstr(sh // 2 - 2, (sw - len(msg1)) // 2, msg1, curses.A_BOLD)
    stdscr.addstr(sh // 2, (sw - len(msg2)) // 2, msg2)
    stdscr.addstr(sh // 2 + 2, (sw - len(msg3)) // 2, msg3)
    stdscr.refresh()

    # Wait for user input
    stdscr.nodelay(0)
    while True:
        choice = stdscr.getch()
        if choice == ord('r') or choice == ord('R'):
            return True  # Restart
        elif choice == ord('q') or choice == ord('Q'):
            return False  # Quit


if __name__ == "__main__":
    while True:
        restart = curses.wrapper(main)
        if not restart:
            break
    print("Thanks for playing!")