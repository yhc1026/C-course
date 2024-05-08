// 二叉树查找值为x的节点
BT *BTreeFind(BT *root, int x)
{
    BT *leftresult = rightResult = NULL;

    if (root == NULL)
    {
        return NULL;
    }
    while (root->data != x)
    {
        leftresult = BTreeFind(root->left, x);
        if (leftresult->data == x)
        {
            return leftresult;
        }
        rightresult = BTreeFind(root->right, x);
        if (rightresult->data == x)
        {
            return rightresult;
        }
    }
    return root;
}