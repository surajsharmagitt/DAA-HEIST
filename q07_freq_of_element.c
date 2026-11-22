#include <stdio.h>

#define SIZE 211

int keys[SIZE];
int freq[SIZE] = {0};
int order[100];

int hashIndex(int val)
{
    return ((val % SIZE) + SIZE) % SIZE;
}

void insertHash(int val, int *distinctCount)
{
    int index = hashIndex(val);
    while (freq[index] != 0 && keys[index] != val)
    {
        index = (index + 1) % SIZE;
    }

    if (freq[index] == 0)
    {
        keys[index] = val;
        order[(*distinctCount)++] = index;
    }
    freq[index]++;
}

int main(void)
{
    int a[100], n, i;
    int distinctCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        insertHash(a[i], &distinctCount);
    }

    printf("\nElement Frequency\n");
    for (i = 0; i < distinctCount; i++)
    {
        int index = order[i];
        printf("%d       %d\n", keys[index], freq[index]);
    }

    return 0;
}
