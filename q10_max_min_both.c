#include <stdio.h>

void minMaxDC(int a[], int low, int high, int *min, int *max, int *comp)
{
    int mid, min1, max1, min2, max2;

    if (low == high)
    {
        *min = *max = a[low];
    }
    else if (high == low + 1)
    {
        (*comp)++;
        if (a[low] < a[high])
        {
            *min = a[low];
            *max = a[high];
        }
        else
        {
            *min = a[high];
            *max = a[low];
        }
    }
    else
    {
        mid = (low + high) / 2;

        minMaxDC(a, low, mid, &min1, &max1, comp);
        minMaxDC(a, mid + 1, high, &min2, &max2, comp);

        (*comp)++;
        if (min1 < min2)
            *min = min1;
        else
            *min = min2;

        (*comp)++;
        if (max1 > max2)
            *max = max1;
        else
            *max = max2;
    }
}

int main(void)
{
    int a[100], n, i;
    int minDC, maxDC, compDC = 0;
    int minTrad, maxTrad, compTrad = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    minMaxDC(a, 0, n - 1, &minDC, &maxDC, &compDC);

    minTrad = maxTrad = a[0];
    for (i = 1; i < n; i++)
    {
        compTrad++;
        if (a[i] < minTrad)
            minTrad = a[i];

        compTrad++;
        if (a[i] > maxTrad)
            maxTrad = a[i];
    }

    printf("\n--- Strategy 1: Divide and Conquer ---\n");
    printf("Minimum element: %d\n", minDC);
    printf("Maximum element: %d\n", maxDC);
    printf("Comparisons made: %d (formula: 3n/2 - 2 = %d)\n", compDC, (3 * n) / 2 - 2);

    printf("\n--- Strategy 2: Traditional Linear Scan ---\n");
    printf("Minimum element: %d\n", minTrad);
    printf("Maximum element: %d\n", maxTrad);
    printf("Comparisons made: %d (formula: 2(n - 1) = %d)\n", compTrad, 2 * (n - 1));

    printf("\nConclusion: Divide & Conquer reduces comparisons from %d to %d.\n", compTrad, compDC);

    return 0;
}