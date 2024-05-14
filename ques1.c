// in a small company there are 5 salesman. each salesman is supposed to sell three products. W.A.P. using 2d array to print
// (i) total sales by each salesman and
// (ii) total sales of each item

#include<stdio.h>
int main()
{
    int i,j,arr[5][3];
    for(i=0;i<5;i++)
    {
        printf("salesman[%d] should enter the price you sold the item at\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Enter the %d product price you sold at:",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<5;i++)
    {
        printf("total sales by %d salesman ",i+1);
        for(j=0;j<3;j++)
        {
            sum += arr[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }

    for(i=0;i<3;i++)
    {
        printf("total sales of item %d = ",i+1);
        for(j=0;j<5;j++)
        {
            sum += arr[j][i];
        }
        printf("%d\n",sum);
        sum=0;
    }

}