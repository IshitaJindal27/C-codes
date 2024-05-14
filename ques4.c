// Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.

#include <stdio.h>

int main() {
    int n, i, x, j;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int a1[n+1];  

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a1[i]);
    }

    printf("Enter the position where you want to insert an element (i): ");
    scanf("%d", &i);
    printf("Enter the element you want to insert (x): ");
    scanf("%d", &x);


    for (int k = n; k >= i; k--)
        a1[k] = a1[k - 1];

    a1[i - 1] = x;

    printf("Enter the position of the element you want to delete (j): ");
    scanf("%d", &j);

    for (int k = j - 1; k < n; k++)
        a1[k] = a1[k + 1];

    printf("Array after insertion and deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a1[i]);
    }

    return 0;
}
