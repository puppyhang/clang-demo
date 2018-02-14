/*指针练习demo*/
#include "stdio.h"

/**
 * 变量名称不占内存，他只是变量地址的一个方便记忆的标识
 * 可以用 & 符号将变量名对应的变量地址取出来。
 */
void main()
{
    void testPointer();

    testPointer();
}

void testPointer()
{
    int a, b;
    int *pointer_a, *pointer_b;
    a = 100;
    b = 200;
    pointer_a = &a;
    pointer_b = &b;
    // * pointer 取出指针中存储的值
    printf("*pointer_a=%d , *pointer_b=%d \n\r", *pointer_a, *pointer_b);
    printf("pointer_a=%d , pointer_b=%d \n\r", pointer_a, pointer_b);
}