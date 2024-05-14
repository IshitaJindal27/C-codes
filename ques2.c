// W.A.P. to read a 2d array marks which stores the marks of five students in three subject. w.a.P to display the highest marks in each subject.

#include<stdio.h>
int main()
{
    int i,j,arr[5][3];
    for(i=0;i<5;i++)
    {
        printf("studen [%d] should enter the marks:\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Enter the marks of subject %d ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<3;i++)
    {
        printf("total marks in subject %d ",i+1);
        for(j=0;j<5;j++)
        {
            sum += arr[j][i];
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
