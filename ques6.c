// Find the largest three distinct elements in an array: Input: arr[] = {10, 4, 3, 50, 23, 90} Output: 90, 50, 23

#include<stdio.h>
int main()
{
    int arr[8] = {10, 4, 3, 50, 23, 90}, l,sl,tl,i;
    if(arr[0]>arr[1]&&arr[0]>arr[2])
    {
        l=arr[0];
        if(arr[1]>arr[2])
        {
            sl=arr[1];
            tl=arr[2];
        }
        else
        {
            sl=arr[2];
            tl=arr[1];
        }
    }
    else if (arr[1]>arr[0]&&arr[1]>arr[2])
    {
        l=arr[1];
        if (arr[0]>arr[2])
        {
            sl=arr[0];
            tl=arr[2];
        }
        else
        {
            sl=arr[2];
            tl=arr[0];
        }
    }
    else
    {
        
    }
    
    
    for(i=0;i<6;i++)
    {

    }
}