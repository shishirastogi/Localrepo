#include <stdio.h>

int main()
{
    int i, rows, columns, k, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of students: ");
    scanf("%d", &columns);
    
    int matrixone[rows][columns];
    int matrixtwo[rows][columns];
    int result[rows][rows];
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++){
            printf("For matrix One : Rows %d:, Students %d: ", i + 1, j + 1);
            scanf("%d", &matrixone[i][j]);
        }
    }
        for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++){
            printf("For matrix Two : Rows %d:, Students %d: ", i + 1, j + 1);
            scanf("%d", &matrixtwo[i][j]);
        }
    }
    
    for (i = 0; i < rows; i++){
        for (k = 0; k < rows; k++){
            int sum = 0;
            for (j = 0; j < columns; j++){
                sum += matrixone[i][k] * matrixtwo[i][k];
            }
            result[i][k] = sum;
        }
    }
    
    for (i = 0; i < rows; i++){
        for (k = 0; k < rows; k++){
            printf("%d\t", result[i][k]);
        }
        printf("\n");
    }
    return 0;
}