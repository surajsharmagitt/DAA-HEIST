#include <stdio.h>

int main(void)
{
    int n, capacity;
    int weight[50], profit[50];
    int dp[50][500];
    int i, w;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights of items:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &weight[i]);
    }

    printf("Enter profits of items:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &profit[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    // Initialize first row and column
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= capacity; w++)
        {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
        }
    }

    // Fill DP table
    for (i = 1; i <= n; i++)
    {
        for (w = 1; w <= capacity; w++)
        {
            if (weight[i] <= w)
            {
                if (profit[i] + dp[i - 1][w - weight[i]] > dp[i - 1][w])
                    dp[i][w] = profit[i] + dp[i - 1][w - weight[i]];
                else
                    dp[i][w] = dp[i - 1][w];
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    printf("\nMaximum profit = %d\n", dp[n][capacity]);

    return 0;
}
