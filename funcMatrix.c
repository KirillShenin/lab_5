#include <stdio.h>
#include <stdlib.h>
#include "func_prototype.h"

void outMatrix(int **matrix, int matrix_row, int matrix_column);

void func(void)
{
    int matrixRow = 6, matrixColumn = 5;
    int **ptrMatrix = (int **) malloc(matrixRow * sizeof(int *));
    for (int i = 0; i < matrixRow; ++i) {
        ptrMatrix[i] = (int *) malloc(matrixColumn * sizeof(int));
    }
    for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            ptrMatrix[i][j] = rand() % 101 - 50;
        }
    }
    puts("\nЗаполнение матрицы случайными числами:\n");
    outMatrix(ptrMatrix, matrixRow, matrixColumn);
    for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            if (ptrMatrix[i][j] %3== 0) ptrMatrix[i][j] = 1;
        }
    }
    puts("Выполнение условия:\n");
    outMatrix(ptrMatrix, matrixRow, matrixColumn);
    puts("\n");
    system("pause");
}

void outMatrix(int **matrix, int matrix_row, int matrix_column)
{
    for (int i = 0; i < matrix_row; ++i) {
        for (int j = 0; j < matrix_column; ++j) {
            printf("%d\t", matrix[i][j]);
            if (j == 7) puts("\n");
        }
    }
}
