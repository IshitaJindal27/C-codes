// Write a program to find the mean of n numbers using arrays.
#include <stdio.h>
int main()
{
    int arr[5],i,sum=0,n=0;float mean;
    for(i=0;i<5;i++)
    {
        printf("Enter the element at %d= ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
        n++;
    }
    mean=(float)sum/n;
    printf("The mean is = %f",mean);
    return 0;
}