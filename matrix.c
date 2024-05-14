#include<stdio.h>
int main()
{
    int i,j,arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element at [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is:\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}