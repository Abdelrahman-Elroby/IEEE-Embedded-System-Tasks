#ifndef MATRIX_H    
#define MATRIX_H    

typedef struct {
    int rows;
    int cols;
    int data[10][10];
} Matrix;


void addMatrices(Matrix *a, Matrix *b, Matrix *result);
void subtractMatrices(Matrix *a, Matrix *b, Matrix *result);

#endif