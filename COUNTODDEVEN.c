#include<stdio.h>
int main()
{
    int odd= 0, even= 0;
    int arr[100];
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);
    return 0;
} 