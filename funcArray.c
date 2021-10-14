#include <stdio.h>
#include <stdlib.h>
#include "func_prototype.h"

void outArray(int *ptrArray, int array_size);

void func(void)
{
    int arraySize = 76;
    int *matrix = (int *) malloc(arraySize * sizeof(int));
    for (int i = 0; i < arraySize; ++i) {
        matrix[i] = rand() % 101 - 50;
    }
    puts("Заполнение массива случайными числами:");
    outArray(matrix, arraySize);
    for (int i = 0; i < arraySize; ++i) {
        if (matrix[i] %3==0) matrix[i] = 1;
    }
    puts("\n\nВыполнение условия:");
    outArray(matrix, arraySize);
    puts("\n");
    system("pause");
}

void outArray(int *ptrArray, int array_size)
{
    for (int i = 0; i < array_size; ++i) printf("%d\t", ptrArray[i]);
}
