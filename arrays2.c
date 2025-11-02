#include <stdio.h>
int main(){
    int i, rows, columns, j, k, l, s;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of students: ");
    scanf("%d", &columns);
    int rollno[rows][columns];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++){
            printf("Rows %d:, Students %d: ", i + 1, j + 1);
            scanf("%d", &rollno[i][j]);
        }
    }
    printf("Inverse of the Matrix:\n");
    for (i = rows - 1; i >= 0; i--) {
        for (j = columns - 1; j >= 0; j--){
            printf("%d ", rollno[i][j]);
        }
        printf("\n");
    }
    return 0;
}