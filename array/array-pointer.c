#include <stdio.h>

int strlenth(char *s);
/**
 * 指针与数组
 * 
 * 指针变量和数组名称有一个不同的地方，数组名称并非一个变量，虽然他可以用来支持数组的访问操作，但却不可以对这个名称最任何运算(数组名称是不可修改的，可以认为是常量)，比如赋值或者自增等等都是错误的。
 * pa =a ; pa++ 都是合法的，但是 a= pa; a++ 等都是不合法的这些特性都是语法赋予他们的特性
 * 
 */
int main(int argc, char *argv[])
{
    int length = strlenth("hello world");

    printf("hello world is contains %d char", length);
    return 0;
}

void basic()
{
    int a[10] = {1, 2}; //定义一个长度为10的数组
    int *pa;            //申明一个整型指针

    pa = &a[0]; //这样，这个指针就指向了a这个数组,可以利用这个指针操作这个数组

    printf("a=%d,pa=%d \n\r", a, pa);

    pa = a; //pa这样的写法也可以编译通过bin正常运行
    printf("pa=%d \n\r", pa);

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d]=%d ", i, *(pa + i)); //虽然看起来只是指针加一，但实际上这个1是一个单位的类型变量的长度，比如int是4
    }

    //  pa = a;  pa 和 a是等价的，可能看起来怪怪的，但在C语言中数组的变量名是被看做一个指针的，事实上我们也可以用 *a 得到数组的第一个变量值， *(a+i) 获取数组第i个位置的值

    printf("\n\r");

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d]=%d ", i, *(a + i)); //虽然看起来只是指针加一，但实际上这个1是一个单位的类型变量的长度，比如int是4，事实上C语言在查找a[i]元素的时候是先转换成*(a+i)的形式再计算其值得
    }
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