#include "matrix.h"

// دالة الجمع
void addMatrices(Matrix *a, Matrix *b, Matrix *result) {


    (*result).rows = (*a).rows;
    (*result).cols = (*a).cols;


    for (int i = 0; i < (*a).rows; i++) {
        for (int j = 0; j < (*a).cols; j++) {

            (*result).data[i][j] = (*a).data[i][j] + (*b).data[i][j];
        }
    }
}

// دالة الطرح
void subtractMatrices(Matrix *a, Matrix *b, Matrix *result) {
    (*result).rows = (*a).rows;
    (*result).cols = (*a).cols;

    for (int i = 0; i < (*a).rows; i++) {
        for (int j = 0; j < (*a).cols; j++) {

            (*result).data[i][j] = (*a).data[i][j] - (*b).data[i][j];
        }
    }
}