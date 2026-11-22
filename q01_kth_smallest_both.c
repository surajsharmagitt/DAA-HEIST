#include <stdio.h>

int partition(int numbers[], int left, int right)
{
    int pivot = numbers[right];
    int i = left;
    int temp;
    for (int j = left; j < right; j++)
    {
        if (numbers[j] <= pivot)
        {
            temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
            i++;
        }
    }
    temp = numbers[i];
    numbers[i] = numbers[right];
    numbers[right] = temp;
    return i;
}

int quickSelect(int numbers[], int size, int kth)
{
    int left = 0;
    int right = size - 1;
    int pivotIndex;
    while (left <= right)
    {
        pivotIndex = partition(numbers, left, right);
        if (pivotIndex == kth - 1)
            return numbers[pivotIndex];
        if (pivotIndex < kth - 1)
            left = pivotIndex + 1;
        else
            right = pivotIndex - 1;
    }
    return 0;
}

int main(void)
{
    int numbers[100], copy[100], size, kth, temp;

    printf("Enter n (1-100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100)
        return 0;

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
        copy[i] = numbers[i];
    }

    printf("Enter k: ");
    scanf("%d", &kth);

    if (kth < 1 || kth > size)
    {
        printf("Invalid k\n");
        return 0;
    }

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] < numbers[minIndex])
                minIndex = j;
        }
        temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    printf("\n--- Method 1: Sorting Approach ---\n");
    printf("%dth smallest element = %d\n", kth, numbers[kth - 1]);

    printf("\n--- Method 2: Quickselect Approach ---\n");
    printf("%dth smallest element = %d\n", kth, quickSelect(copy, size, kth));

    return 0;
}