#include <stdio.h>

void main()
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