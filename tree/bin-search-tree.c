#include <stdio.h>
#include <malloc.h>

/**
 * 二叉查找树的实现
 * 
 * 使一棵树成为二叉查找树的性质是，对于树中的每个节点X，他的左子树中的所有项的值小于X中的项，
 * 而他的右子树中的所有项的值大于X中的项
 */
typedef struct tnode *TreePtr;
typedef struct tnode
{
    int data;
    TreePtr leftChild;
    TreePtr rightChild;
} TreeNode;

int main(int argc, char *argv[])
{

    return 0;
}