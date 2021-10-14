#include <stdio.h>
#include <stdlib.h>
#include "loadLib.h"
#include "func_prototype.h"

int main()
{
    int a = 0, b = 1;
    
    puts("Выберите библиотеку:");
    puts("1. Библиотека с матрицей");
    puts("2. Библиотека с массивом");
    puts("3. Выход");
    while (b) {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("/Users/slavick.snegirevicloud.com/Desktop/lab_3/funcMatrix.dll");
        if (a == 2)
            LoadRun("/Users/slavick.snegirevicloud.com/Desktop/lab_3/funcArray.dll");
        if (a == 3)
            b = 0;
        else puts("Введите число в диапазоне от 1 до 3.");
    }
    return 0;
}
