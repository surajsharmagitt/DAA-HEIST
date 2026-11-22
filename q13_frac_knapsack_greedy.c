#include <stdio.h>

int main(void)
{
    int n, i, j;
    float weight[100], profit[100], ratio[100];
    float capacity, totalProfit = 0, temp;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weight and profit of each item:\n");
    for (i = 0; i < n; i++)
    {
        printf("Item %d weight: ", i + 1);
        scanf("%f", &weight[i]);

        printf("Item %d profit: ", i + 1);
        scanf("%f", &profit[i]);

        ratio[i] = profit[i] / weight[i];
    }

    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    // Sort items by profit/weight ratio
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;
            }
        }
    }

    // Select items
    for (i = 0; i < n; i++)
    {
        if (capacity >= weight[i])
        {
            capacity = capacity - weight[i];
            totalProfit = totalProfit + profit[i];
        }
        else
        {
            totalProfit = totalProfit + ratio[i] * capacity;
            break;
        }
    }

    printf("\nMaximum profit = %.2f\n", totalProfit);

    return 0;
}
