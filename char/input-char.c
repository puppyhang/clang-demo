#include <stdio.h>
#include <conio.h>

/**
 * int getchar();这个函数的特点是用户输入的字符串被放在缓冲区，知道用户按下回车为止，当用户按下回车键之后，getchar才开始从stdio流中每次读入一个字符
 * 
 * getchar 函数的返回值是用户输入的第一个字符的ASCII码。 不支持中文哦
 * 
 * argc 标识参数的个数,ANSI规定参数的第一个为执行程序的名称，后面的才是参数或者选项的个数，
 * *argv[] 标识参数向量，村塾输入的参数或者选项，每个参数或者选项通过空格分割
 */
int main(int argc, char *argv[])
{
    // int num = 0;
    // while ((num = getchar()) > 0)
    // {
    //     printf("num is %c \n\r", num);
    // }

    //int input = getchar(); //输入一句话也只是获取第一个字符,但是是冲缓冲区获取

    //printf("input is %c", input);

    // int input2 = getch();

    //printf("input is %c", input2); //当用户按下某个键之后立刻获取输入，不需要等待enter键按下

    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("a b c is %d %d %d", a, b, c);

    // printf("argc is %d \n\r", argc);
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("argv is %c \n\r", *argv[i]);
    // }
    printf("your input args is ");
    while (--argc > 0)
    {
        // '*'是从右到左的结合的，*++argv相当于*(++argv),%s是打印一个字符串，%c是打印一个字符
        printf("%s%s", *(++argv), (argc - 1) ? " " : ""); //0是假,非0是真
    }
    return 0;
}