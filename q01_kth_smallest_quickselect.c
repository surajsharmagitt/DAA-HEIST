#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[high], i = low, temp, j;
    for (j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }
    temp = a[i];
    a[i] = a[high];
    a[high] = temp;
    return i;
}

int quickSelect(int a[], int low, int high, int k)
{
    if (low <= high)
    {
        int pi = partition(a, low, high);
        if (pi == k - 1)
            return a[pi];
        else if (pi > k - 1)
            return quickSelect(a, low, pi - 1, k);
        else
            return quickSelect(a, pi + 1, high, k);
    }
    return -1;
}

int main(void)
{
    int a[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &k);

    if (k < 1 || k > n)
    {
        printf("Invalid K\n");
        return 0;
    }

    int ans = quickSelect(a, 0, n - 1, k);
    printf("%dth smallest element = %d\n", k, ans);

    return 0;
}
