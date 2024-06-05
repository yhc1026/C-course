// 深度优先遍历

bool visited[MAXVEX]; // 判断是否访问过的数组

void DFS(Mgraph G, int i)
{
    int j = 0;
    visited[i] = true; // 将访问过的节点变成true
    for (j = 0; j < G.numnodes; j++)
    {
        if (G.arc[i][j] != 0 && !visited[j])
        {
            DFS(G, j); // 递归
        }
    }
    return;
}
