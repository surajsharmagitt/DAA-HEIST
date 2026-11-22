#include <stdio.h>

#define SIZE 10

void linearProbing(int a[], int n)
{
    int hash[SIZE] = {0};
    int i, index;

    printf("\n--- Linear Probing ---\n");

    for (i = 0; i < n; i++)
    {
        index = a[i] % SIZE;

        while (hash[index] != 0)
        {
            index = (index + 1) % SIZE;
        }

        hash[index] = a[i];
    }

    printf("Hash table:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("Index %d : %d\n", i, hash[i]);
    }
}

int main(void)
{
    int a[SIZE], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    linearProbing(a, n);

    return 0;
}
