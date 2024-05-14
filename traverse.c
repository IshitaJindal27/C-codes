// TRAVERSE AN ARRAY MEANS ACCESSING ALL THE ELEMENTS IN AN ARRAY
#include <stdio.h>

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter the element at %d= ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++)
    {
        printf("elemnt at %d = %d\n",i+1,arr[i]);
    }
    return 0;
}