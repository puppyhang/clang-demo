/*复习C语言基础*/

#include "stdio.h"
#include "stdbool.h"
#include "math.h"

void main()
{
    void printSizeOfType();
    void forLoop();
    void whileLoop();
    void doWhileLoop();
    void swichSelection();

    // printSizeOfType();
    // forLoop();
    // whileLoop();
    // doWhileLoop();
    int i = 10;
    printf("Enter you want int num : \r\n");
    scanf("%d", &i);
    swichSelection(i);
}

void swichSelection(int i)
{
    switch (i)
    {
    case 10:
    {
        printf("this num is 10 \n\r");
        break;
    }
    case 9:
    {
        printf("this num is 9  \n\r");
        break;
    }

    default:
    {
        printf("no match  \n\r");
    }
    }
}

void doWhileLoop()
{

    int i = 10;
    do
    {
        printf("hello world %d \r\n", i);
        i--;
    } while (i > 0);
}

void whileLoop()
{
    int i = 10;
    while (i > 0)
    {
        printf("hello world \r\n");

        i--;
    }
}

void forLoop()
{
    // C99中新增的在for循环表达式中定义变量
    for (int i = 0; i < 10; i++)
    {

        printf("hello world \n\r");
    }
}
void printFormat()
{
    /*10E3的结果虽然是整数，但是这种表示方法使得C语言将其作为指数形式(实数)存储在计算机中，所以打印的时候需要使用%f*/
    printf("%f", 10E3);

    /*由于PI是实数，在计算机中使用指数形式存储，所以打印的时候使用%f或者%e*/
    printf("%f", M_PI);
    printf("%e", M_PI);
}

void printSizeOfType()
{
    printf("size of float: %5d byte \n\r", sizeof(float));
    printf("size of int: %5d byte \n\r", sizeof(int));
    printf("size of double: %5d byte \n\r", sizeof(double));
    printf("size of long double: %5d byte \n\r", sizeof(long double));
    printf("size of short int : %5d byte \n\r", sizeof(short int));
    printf("size of long int : %5d byte \n\r", sizeof(long int));
    printf("size of long char : %5d byte \n\r", sizeof(char));
    printf("size of unsigned int : %5d byte \n\r", sizeof(unsigned int));
    printf("size of signed int : %5d byte \n\r", sizeof(signed int));
    printf("size of signed bool : %5d byte \n\r", sizeof(bool));
    printf("size of long long int : %5d byte \n\r", sizeof(long long int));
}