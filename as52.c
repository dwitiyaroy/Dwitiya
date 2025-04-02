#include <stdio.h>

int main() {
    int i, j, rows, columns;

    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int mat[rows][columns], trans[columns][rows];

    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            trans[j][i] = mat[i][j];
        }
}
    printf("Transpose of the matrix:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
