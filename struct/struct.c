#include <stdio.h>

//宏定义是无类型的,可以适用于任何类型
#define MAX(a, b) ((a) > (b) ? (a) : (b));
#define MIN(a, b) ((a) > (b) ? (b) : (a));
/**
 * 结构体是一组相关变量的集合，这些变量可能为不同的类型，为了方便处理而将其组织在一个名字之下
 * 
 * 关键字struct之后的名字称为结构标记
 */

struct point
{
    int x;
    int y;
};
/**
 * 结构标记是可选的,可以像定义普通的变量一样定义结构变量
 * 
 * 从语法的角度来说,这种申明的方式与 int x,y,z;具有类似的意义
 * 
 * 这两种方式都将x，y，和z申明为指定类型的变量，并且为他们分配存储空间
 */
struct
{
    int x;
    int y;
} x, y, z;
/**
 * 结构体可以嵌套,比如可以使用对角线上的两个点来定义矩形
 */
struct rect
{
    struct point pt1; //点1
    struct point pt2; //点2
};

/**定义结构数组*/
struct key
{
    char *word;
    int count;
} keytab[] = {
    {"auto", 0},
    {"break", 1},
    {"case", 2},
    {"char", 3},
    {"const", 4},
};

struct rect screen;
struct point middle;
struct point makepoint(int x, int y);
struct point addpoint(struct point p1, struct point p2);
void test_pointer_struct();
struct point makepoint2(struct point *pp);

int main(int args, char *argv[])
{
    // struct point x = {220, 330}, y, z; //使用结构标记定义变量,但是前面要加少struct关键字
    // printf("x.x is %d,x.y is %d.", x.x, x.y);

    // struct rect screen = {{220, 330}, {134, 290}}; //定义屏幕
    // printf("screen.pt1 is (%d,%d)", screen.pt1.x, screen.pt1.y);

    // screen.pt1 = makepoint(120, 933);
    // screen.pt2 = makepoint(322, 334);
    // middle = makepoint((screen.pt1.x + screen.pt2.x) / 2, (screen.pt1.y + screen.pt2.y) / 2);
    // printf("middle is (%d,%d)", middle.x, middle.y);

    // test_pointer_struct();

    // struct point x = {220, 330};
    // x = makepoint2(&x);
    // printf("x is (%d,%d)", x.x, x.y);
    
    return 0;
}
/**因为在C语言中*的运算法则遵循从右到左的规则，所以*pp.x 等价于 *(pp.x),pp是一个指针变量，并非结构体或者union，这是一个非法表达式,所以应该使用(*pp).x*/
struct point makepoint2(struct point *pp)
{

    struct point temp_p;
    temp_p.x = (*pp).x + 10;
    temp_p.y = (*pp).y + 99;

    return temp_p;
}
/**(.和->)在C语言中是从左到右的结合的*/
void test_pointer_struct2()
{
    struct point p = makepoint(223, 224);
    struct point *pp = &p;
    //printf("pp is %d,p is (%d,%d)", pp, (*pp).x, (*pp).y);
    //除了使用(*pp).x/y,还可以使用 -> 操作符引用结构成员，这是C语言提供的另一种更为简洁的引用成员的方式
    printf("pp is %d,p is (%d,%d)", pp, pp->x, pp->y);
}

void test_pointer_struct()
{
    struct point p = makepoint(223, 224);
    struct point *pp = &p;
    printf("pp is %d,p is (%d,%d)", pp, (*pp).x, (*pp).y);
}

/**返回结构体类型的变量的方法*/
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

/**对点执行算数运算,两个点相加，返回相加后的结果*/
struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;

    return p1;
}

/**如果点p在矩形r内则返回1，否则返回0*/
int ptinrect(struct point p, struct rect r)
{

    return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}