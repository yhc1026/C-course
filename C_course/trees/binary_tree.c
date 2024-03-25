// 二叉树遍历有三种形式：前序 中序 后序
// 前序：根-左子树-右子树
// 中序：左子树-根-右子树
// 后续：左子树-右子树-根

#include <stdio.h>
#include <stdlib.h>

typedef struct BinaryTreeNode
{
    int data;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
} BT;

BT *buynode(int x)
{
    BT *node = (BT *)malloc(sizeof(BT));
    if (node == NULL)
    {
        perror("malloc");
        return NULL;
    }
    node->left = NULL;
    node->right = NULL;
    node->data = x;
    return node;
}

BT *createtree()
{
    BT *node1 = buynode(1);
    BT *node2 = buynode(2);
    BT *node3 = buynode(3);
    BT *node4 = buynode(4);
    BT *node5 = buynode(5);
    BT *node6 = buynode(6);

    node1->left = node2; // 构建树
    node1->right = node4;
    node2->left = node3;
    node4->left = node5;
    node4->right = node6;

    return node1;
}

void prevorder(BT *root) // 按照前序访问二叉树
{
    if (root == NULL)
    {
        printf("N");
        return;
    }
    printf("%d", root->data); // 利用递归访问，只需调整55，56，57三行代码的顺序就能改变访问模式
    prevorder(root->left);
    prevorder(root->right);
}

int main()
{
    BT *root = createtree();
    prevorder(root);
    return 0;
}