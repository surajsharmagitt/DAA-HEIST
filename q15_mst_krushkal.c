#include <stdio.h>

struct Edge
{
    int u, v, weight;
};

int parent[100];

int find(int i)
{
    while (parent[i] != i)
    {
        i = parent[i];
    }

    return i;
}

void unionSet(int u, int v)
{
    int a = find(u);
    int b = find(v);

    parent[a] = b;
}

int main(void)
{
    struct Edge e[100], temp;
    int n, m, i, j, count = 0, cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &m);

    printf("Enter edges (u v weight):\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d %d %d", &e[i].u, &e[i].v, &e[i].weight);
    }

    // Sort edges by weight
    for (i = 0; i < m - 1; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (e[i].weight > e[j].weight)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    // Initialize parent array
    for (i = 0; i < 100; i++)
    {
        parent[i] = i;
    }

    printf("\nEdges in Minimum Spanning Tree:\n");

    for (i = 0; i < m; i++)
    {
        if (find(e[i].u) != find(e[i].v))
        {
            printf("%d - %d : %d\n", e[i].u, e[i].v, e[i].weight);

            cost = cost + e[i].weight;
            unionSet(e[i].u, e[i].v);
            count++;

            if (count == n - 1)
                break;
        }
    }

    printf("Minimum cost = %d\n", cost);

    return 0;
}
