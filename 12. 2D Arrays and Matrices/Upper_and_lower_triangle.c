#include <stdio.h>
int main() {
        int rows, cols, r, c;
        printf("Please enter the number of rows for the matrix: ");
        scanf("%d", &rows);
        printf("Please enter the number of columns for the matrix: ");
        scanf("%d", &cols);

        int matrix[rows][cols];

        printf("Please enter the elements for the Matrix: \n");
        for(r = 0; r < rows; r++) {
                for(c = 0; c < cols; c++) {
                        printf("MAT[%d][%d] = ", r+1, c+1);
                        scanf("%d", &matrix[r][c]);
                }
        }
        printf("\n The Lower Triangular Matrix is: ");
        for(r = 0; r < rows; r++) {
                printf("\n");
                for(c = 0; c < cols; c++) {
                        if(r >= c) {
                                printf("%d\t ", matrix[r][c]);
                        }
                        else{
                                printf("0");
                                printf("\t");
                        }
                }
        }
        printf("\n\n The Upper Triangular Matrix is: ");
        for(r = 0; r < rows; r++) {
                printf("\n");
                for(c = 0; c < cols; c++) {
                        if(r > c) {
                                printf("0");
                                printf("\t");
                        }
                        else{
                                printf("%d\t ", matrix[r][c]);

                        }
                }
        }

        return 0;
}
