#include <stdio.h>

void main()
{
    void printDoubleDimendArray();

    printDoubleDimendArray();
}
void printDoubleDimendArray()
{
    int array[3][3] = {{1, 2, 3}, {43, 22, 11}, {33, 22, 55}};

    printf("size of array is %d , size of array[0] is %d \n\r", sizeof(array), sizeof(array[0]));

    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++)
    {
        printf("array[%d]=%d \n\r", i, array[i]);

        int lengthOfLine = sizeof(array[0]) / sizeof(array[0][0]);

        for (int j = 0; j < lengthOfLine; j++)
        {
            printf("array[%d][%d]=%5d ", i, j, array[i][j]);
            if (j == lengthOfLine - 1)
            {
                printf("\n\r");
            }
        }
    }
}

void printSingleDimendArray()
{
    int array[10] = {1, 2, 3, 5, 5, 4};

    printf("size of array is %d \n\r", sizeof(array));

    int length = sizeof(array) / sizeof(array[0]);

    printf("length of array is %d \n\r", length);

    printf("size of array[0] is %d \n", sizeof(array[0]));

    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}