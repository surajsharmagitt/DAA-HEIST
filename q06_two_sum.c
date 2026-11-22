#include <stdio.h>

#define SIZE 211

int table[SIZE];
int occupied[SIZE] = {0};

int hashIndex(int val)
{
    return ((val % SIZE) + SIZE) % SIZE;
}

int search(int val)
{
    int index = hashIndex(val);
    while (occupied[index])
    {
        if (table[index] == val)
            return 1;
        index = (index + 1) % SIZE;
    }
    return 0;
}

void insert(int val)
{
    int index = hashIndex(val);
    while (occupied[index] && table[index] != val)
    {
        index = (index + 1) % SIZE;
    }
    table[index] = val;
    occupied[index] = 1;
}

int main(void)
{
    int a[100], n, T, i;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target sum T: ");
    scanf("%d", &T);

    for (i = 0; i < n; i++)
    {
        int needed = T - a[i];
        if (search(needed))
        {
            printf("Pair found: %d and %d\n", needed, a[i]);
            found = 1;
            break;
        }
        insert(a[i]);
    }

    if (found == 0)
    {
        printf("No pair found.\n");
    }

    return 0;
}
