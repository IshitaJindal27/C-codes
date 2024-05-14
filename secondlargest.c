// Write a program to find the second largest of n numbers using an array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of element you want to add= ");
    scanf("%d",&n);
    int arr[n],i,l,sl;
    for(i=0;i<n;i++)
    {
        printf("Enter the element at %d= ",i+1);
        scanf("%d",&arr[i]);
    }
    if(arr[1]>arr[0])
    {
        l=arr[1];
        sl=arr[0];
    }
    else
    {
        l=arr[0];
        sl=arr[1];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
    }
    printf("Second Largest element is = %d",sl);
    return 0;

}