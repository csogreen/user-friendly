#include <stdio.h>
#include <stdlib.h>

int main(){
    int input = 0;
    char maline1[30], maline2[30], maline3[30]; 

    FILE * matrixA = fopen("matrix_a.txt", "w");
    printf("To create two 3x3 matrices\nEnter first line: ");
    fgets(maline1, sizeof(maline1), stdin);
    fprintf(matrixA, "%s", maline1);
    printf("Enter second line: ");
    fgets(maline2, sizeof(maline2), stdin);    
    fprintf(matrixA, "%s", maline2);
    printf("Enter third line: ");
    fgets(maline3, sizeof(maline3), stdin);
    fprintf(matrixA, "%s", maline3);
    fclose(matrixA);

    printf("Matrix A created. Input for matrix B: ");

    FILE * matrixB = fopen("matrix_b.txt", "w");
    printf("Enter first line: ");
    fgets(maline1, sizeof(maline1), stdin);
    fprintf(matrixB, "%s", maline1);
    printf("Enter second line: ");
    fgets(maline2, sizeof(maline2), stdin);    
    fprintf(matrixB, "%s", maline2);
    printf("Enter third line: ");
    fgets(maline3, sizeof(maline3), stdin);
    fprintf(matrixB, "%s", maline3);
    fclose(matrixB);

    matrixA = fopen("matrix_a.txt", "r");
    matrixB = fopen("matrix_b.txt", "r");
    if (matrixA && matrixB == NULL) {
        printf("Critical failure");
    } else {
        printf("Operation successful\n");
        fclose(matrixA);
        fclose(matrixB);
    }

    while(input != -1) {
        printf("Enter -1 to exit: ");
        scanf("%d", &input);
    }

    printf("Bye.");

    return 0;
}
