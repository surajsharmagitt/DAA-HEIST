#include <stdio.h>

void quickSort(int a[], int low, int high)
{
    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = a[low];
        i = low;
        j = high;

        while (i < j)
        {
            while (a[i] <= pivot && i < high)
            {
                i++;
            }

            while (a[j] > pivot)
            {
                j--;
            }

            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}

int main(void)
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("\n--- Time Complexity Analysis ---\n");
    printf("Recurrence Relation (Balanced): T(n) = 2T(n/2) + O(n)\n");
    printf("Best Case:    O(n log n) [when pivot splits array equally]\n");
    printf("Average Case: O(n log n)\n");
    printf("Worst Case:   O(n^2)     [when array is already sorted/reverse sorted]\n");
    printf("Space Complexity: O(log n) auxiliary stack space\n");

    return 0;
}
