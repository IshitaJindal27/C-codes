// w.a.p to input two matrices of m*n and then calculate the sum of theitr corresponding elements and store it in a third m*n matrix 

#include<stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    printf("Enter elements of 1st matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }

    // adding two matrices
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("\nSum of two matrices: \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++) {
            printf("%d   ", C[i][j]);
            if(j == n - 1) {
                printf("\n\n");
            }
        }

    return 0;
}
