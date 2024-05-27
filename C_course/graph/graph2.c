// 邻接表

#include "D:\codeC\vscodeC\C_course\C-course\C_course\graph\graph1.c"
typedef struct edgenode
{
    int adjvex;
    int weight;
    struct edgenode *next;
} Enode;

tupedef struct vertexnode
{
    char info;
    Enode *firstedge;
} Vnode, adjlist[MAXVEX];

typedef struct
{
    adjlist Alist; // 创建一个数组
    int numedges, numnodes;
} Gadjlist;

void createGadjlist(Gadjlist *G)
{
    int a = 0, b = 0;
    printf("输入顶点和边的数量");
    scanf("%d, %d", G->numnodes, G->numedges);
    for (int i = 0; i < G->numnodes; i++)
    {
        scanf("%d", G->Alist[i]);
        G->Alist[i].firstedge = NULL;
    }
    Enode *e = NULL;
    for (int k = 0; k < G->numedges; k++)
    {
        printf("输入边的序号");
        scanf("%d, %d", &a, &b);
        e = (Enode *)malloc(sizeof(Enode));
        e->adjvex = j;
        e->next = G->Alist[i].firstedge;
        G->Alist[i].firstedge = e;
    }
}
