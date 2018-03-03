#include <stdio.h>

int strlenth(char *s);
void strcopy(char *s, char *t);
void swap(int *a, int *b);
/**
 * 字符串常量是一个字符串数组
 * char amessage[] = "";     amessage始终指向同一个存储位置，可以对数组中的单个字符串进行修改
 * char *pmessage =  "";     pmessage是一个指针，其初始值指向一个字符串常量，之后可以被修改为其他的地址，但如果视图修改字符串的内容救过是没有意义的。
 */
int main(int argc, char *argv[])
{

    // char *message; //定义一个字符类型的指针

    // message = "this is string"; //这样message就指向了一个字符串常量，这个字符串常量的第一个字符的地址就是这个指针的值

    // printf("message is \"%s\"\n\r", message);

    // int legth = strlenth("this is string");
    //逐个访问所有字符串
    // for (int i = 0; i < legth; i++)
    // {
    //     printf("message[%d]is:%c \n\r", i, *(message + i));
    // }

    // int a;
    // if (a = 0)
    // {
    //     printf("这句话是不能被打印的");
    // }

    // if (a = '\0')
    // {
    //     printf("这句话也是不能被打印的,'\0'的ascii码也是0"); //利用好这个原理可以写出更简洁的字符串赋值函数
    // }

    //char *str1 = "this is str 1";
    //char *str2 = "this is str 2";
    /*copy两个字符串常量的值，这是不可行的*/
    //strcopy(str1, str2);
    //printf("str1 is %s \t str2 is %s \t", str1, str2);

    //copy两个字符数组的值这是可以的，因为数组中的内容是可以修改的
    char str1[] = "this is str 1";
    char str2[] = "this is str 2";
    strcopy(str1, str2);
    printf("str1 is %s \t str2 is %s \t", str1, str2);
    // int a = 90, b = 1200;
    // swap(&a, &b);
    // printf("a = %d ; b = %d \n\r", a, b);
    return 0;
}

int strlenth(char *s)
{
    printf("calcu %s length:\n\r", s);

    int length;

    for (length = 0; *s != '\0'; s++)
    {
        length++;
    }

    return length;
}
/**copy t的值到s中*/
void strcopy(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}

/**交换两个变量的值*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}