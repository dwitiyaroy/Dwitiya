#include <stdio.h>

int main() {
    int i,j,rows, columns;
    
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int mat1[rows][columns], mat2[rows][columns], sum[rows][columns];

    
    printf("Enter elements of 1st matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    
    printf("Enter elements of 2nd matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    
    printf("Sum of matrices:\n");
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
