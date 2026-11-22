#include <stdio.h>

#define SIZE 10

void quadraticProbing(int a[], int n)
{
    int hash[SIZE] = {0};
    int i, j, index;

    printf("\n--- Quadratic Probing ---\n");

    for (i = 0; i < n; i++)
    {
        index = ((a[i] % SIZE) + SIZE) % SIZE;
        j = 0;

        while (hash[(index + j * j) % SIZE] != 0)
        {
            j++;

            if (j == SIZE)
            {
                printf("Cannot insert %d (Table full)\n", a[i]);
                break;
            }
        }

        if (j < SIZE)
        {
            hash[(index + j * j) % SIZE] = a[i];
        }
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

    quadraticProbing(a, n);

    return 0;
}
