#include <stdio.h>

#define INF 999

int main(void)
{
    int n, cost[10][10];
    int visited[10] = {0};
    int i, j, min, u, v;
    int totalCost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (0 for no edge):\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    visited[0] = 1;

    printf("\nEdges in Minimum Spanning Tree:\n");

    for (i = 0; i < n - 1; i++)
    {
        min = INF;

        for (j = 0; j < n; j++)
        {
            if (visited[j])
            {
                for (int k = 0; k < n; k++)
                {
                    if (!visited[k] && cost[j][k] < min)
                    {
                        min = cost[j][k];
                        u = j;
                        v = k;
                    }
                }
            }
        }

        if (min == INF)
        {
            printf("Graph is not connected.\n");
            return 0;
        }

        printf("%d - %d : %d\n", u, v, min);

        visited[v] = 1;
        totalCost = totalCost + min;
    }

    printf("Minimum cost = %d\n", totalCost);

    return 0;
}
