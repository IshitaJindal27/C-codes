// Write a program to print the position of the smallest number of n numbers using arrays.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no.of element you want to add in your array");
    scanf("%d",&n);
    int arr[n],sm,k=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d= ",i+1);
        scanf("%d",&arr[i]);
    }
    sm=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<sm)
        {
            sm=arr[i];
            k=i;
        }

    }
    printf("Smallest number position is %d",k+1);
    return 0;
}