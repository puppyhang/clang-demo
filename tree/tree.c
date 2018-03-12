#include <stdio.h>
#include <malloc.h>

/**
 * 二叉树的实现,一个树的节点中应该包含三个数据,一个是左子节点，一个是右边子节点 他的特点是
 * 
 * 二叉树是一种特殊的树结构，他的特点是每个节点至多只有两个子树，即二叉树中不存在度大于二的节点，并且二叉树有
 * 左右之分，顺序不能颠倒。
 * 
 * 以下这种方式是使用连式存储的当时保存二叉树的。利用这种结构所得的二叉树存储结构称之为二叉链表，
 * 还有三叉链表(多加一个指针域指向双亲节点)
 */
typedef struct tnode *TreePtr; //TreePtr 是 (struct tnode *) 的别名
typedef struct tnode
{
    int data;
    TreePtr leftChild;
    TreePtr rightChild;
} TreeNode; //TreeNode 是 (struct tnode) 的别名

TreeNode *create_binary_tree(int data);

int main(int argc, char *argv[])
{
    TreePtr tree = create_binary_tree(10);

    printf("created tree:{leftClid:%d,data:%d,rightChild:%d}", tree->leftChild, tree->data, tree->rightChild);

    return 0;
}

/**
 * 构造一颗二叉树
 * 
 * @param data 树的根节点的数据
 */
TreeNode *create_binary_tree(int data)
{
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->data = data;
    node->leftChild = NULL;
    node->rightChild = NULL;
    return node;
}