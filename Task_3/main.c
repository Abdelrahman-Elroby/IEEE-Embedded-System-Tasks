#include <stdio.h>    
#include "matrix.h"   

int main() {

    Matrix m1 = {2, 2, {{10, 20}, {30, 40}}};
    Matrix m2 = {2, 2, {{1, 2}, {3, 4}}};
    Matrix res; 



    addMatrices(&m1, &m2, &res);


    printf("Result of Addition:\n");
    for (int i = 0; i < res.rows; i++) {
        for (int j = 0; j < res.cols; j++) {
            printf("%d  ", res.data[i][j]);
        }
        printf("\n");
    }


    subtractMatrices(&m1, &m2, &res);

    printf("\nResult of Subtraction:\n");
    for (int i = 0; i < res.rows; i++) {
        for (int j = 0; j < res.cols; j++) {
            printf("%d  ", res.data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
