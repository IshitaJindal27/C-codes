#include<stdio.h>
int main()
{
    int arr[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the element at [%d],[%d]",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}