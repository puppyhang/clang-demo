#include <stdio.h>
#include <stdlib.h>

#define null NULL;
/**
 *   链表的实现:链表数据结构
 *   Node是使用typedef定义的结构体别名。
 *   struct node
 *   {
 *       int data;          //数据域
 *       struct node *next; //指针域
 *   };
 */
typedef struct node
{
    int data;          //数据域
    struct node *next; //指针域
} Node;

Node *init_node(Node *pnode, int data);
Node *create_linklist_by_head(Node *phead, int data);
void traversal_linklist(Node *linklist);
int length(Node *linklist_head);
Node *reverse(Node *head);

/**
 * 简历单向链表的方法有两种，一种是头插法，一种是尾插法。
 */
int main(int argc, char *argv[])
{
    Node *link_list;
    link_list = init_node(link_list, 0);
    printf("初始化节点{data:%d,next:%d}成功\n", link_list->data, link_list->next);
    for (int i = 0; i < 10; i++) //创建一个具有是个节点的链表
    {
        link_list = create_linklist_by_head(link_list, i + 1);
    }
    printf("长度为{%d}的链表", length(link_list));
    traversal_linklist(link_list);
    printf("创建成功\n逆序之后的链表为:");
    traversal_linklist(reverse(link_list));
    return 0;
}

/**
 * 在某个区间上的逆序
 * 
 * @param head 链表的头指针
 * @param start 开始逆序的节点位置
 * @param end  结束逆序的节点位置
 */
Node *reverse_by_region(Node *head, int start, int end)
{

    return null;
}

/**
 * 链表的逆置(the first method:就地逆置)
 * 循环链表，循环到一个就逆置一个元素，这样的算符复杂度是O(n)
 * @param head 链表的头指针
 */
Node *reverse(Node *head)
{
    if (NULL == head)
    {
        printf("link list is empty !");
        return NULL;
    }

    Node *new_head = NULL; //指向NULL链的head指针
    while (head != 0)
    {
        Node *next = head->next; //备份head的next元素

        head->next = new_head; //将head指向的元素放到另外的一个链表头上

        new_head = head; //将新链表的头指针指向head元素

        head = next; //将原链表指向下一个元素
    }

    return new_head;
}

/**
 * 计算链表的长度
 * 
 * @param linklist 链表的头指针
 */
int length(Node *linklist_head)
{
    Node *head = linklist_head;
    int count = 0;
    while (head != NULL && head != 0)
    {
        head = head->next;
        count++;
    }
    return count;
}

/**
 * 遍历链表
 * 
 * @param linklist 链表的头指针
 */
void traversal_linklist(Node *linklist_head)
{
    Node *head = linklist_head;
    while (head != NULL && head != 0)
    {
        printf("{data:%d,next:%d}", head->data, head->next);
        head = head->next;
        if (head != 0)
        {
            printf("->");
        }
    }
}

/**
 * 初始化一个链表的节点,使用一个结构体指针接收这个节点
 * @param pnode 一个空的节点
 * @param data  节点的数据域
 */
Node *init_node(Node *pnode, int data)
{
    /**
     * malloc是动态内存分配函数，函数原型为 void *malloc(unsigned int num_bytes),
     * 如果分配成功则放回指向被分配内存的指针，否则返回NULL，void * 表示未确定类型的指针，可以指向任何类型的数据，更明确的说
     * 法是系统在申请这部分内存空间时候还不知道用户使用这段空间来存储什么类型的数据。
     * 
     * 注意：当内存不在使用的时候需要使用free释放内存。
     */
    pnode = (Node *)malloc(sizeof(Node));
    pnode->data = data;
    pnode->next = NULL;

    return pnode;
}
/**
 * 通过头插法创建链表,因为每次都会在链表的头部插入所以得名
 * @param phead 头结点
 * @param data 节点的数据
 */
Node *create_linklist_by_head(Node *phead, int data)
{

    printf("当前头结点为:{data:%d,next:%d}->", phead->data, phead->next);

    Node *pnode = init_node(phead, data);
    printf("创建一个新节点[%d]{data:%d,next:%d}成功->", pnode, pnode->data, pnode->next);
    Node *ptemp = phead;
    printf("交换头结点{data:%d,next:%d}和新创建的节点{data:%d,next:%d}\n", phead->data, phead->next, ptemp->data, ptemp->next);
    if (phead == NULL)
    {
        return pnode; //如果链表为null链表，则直接返回创建的节点
    }
    else
    {
        phead = pnode;       //将头结点赋值为新创建的节点
        pnode->next = ptemp; //将新的节点的指针域指向原来的头结点
    }
    return phead;
}