#include <stdio.h>

void minMax(int a[], int low, int high, int *min, int *max)
{
    int mid, min1, max1, min2, max2;

    if (low == high)
    {
        *min = *max = a[low];
    }
    else if (high == low + 1)
    {
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

        minMax(a, low, mid, &min1, &max1);
        minMax(a, mid + 1, high, &min2, &max2);

        if (min1 < min2)
            *min = min1;
        else
            *min = min2;

        if (max1 > max2)
            *max = max1;
        else
            *max = max2;
    }
}

int main(void)
{
    int a[100], n, i;
    int min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    minMax(a, 0, n - 1, &min, &max);

    printf("\nUsing Divide and Conquer:\n");
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}
