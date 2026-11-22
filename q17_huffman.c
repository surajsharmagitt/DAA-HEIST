#include <stdio.h>

int main(void)
{
    int n, i, j, min1, min2;
    int freq[40], left[40], right[40], parent[40];
    int code[40], top, node;
    char ch[20];

    printf("Enter number of characters: ");
    scanf("%d", &n);

    printf("Enter characters and frequencies:\n");

    for (i = 0; i < 2 * n; i++)
    {
        parent[i] = -1;
        left[i] = -1;
        right[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        scanf(" %c %d", &ch[i], &freq[i]);
    }

    for (i = n; i < 2 * n - 1; i++)
    {
        min1 = -1;
        min2 = -1;

        for (j = 0; j < i; j++)
        {
            if (parent[j] == -1)
            {
                if (min1 == -1 || freq[j] < freq[min1])
                {
                    min2 = min1;
                    min1 = j;
                }
                else if (min2 == -1 || freq[j] < freq[min2])
                {
                    min2 = j;
                }
            }
        }

        freq[i] = freq[min1] + freq[min2];
        left[i] = min1;
        right[i] = min2;
        parent[min1] = i;
        parent[min2] = i;
    }

    printf("\nHuffman Codes:\n");

    if (n == 1)
    {
        printf("%c : 0\n", ch[0]);
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        node = i;
        top = 0;

        while (parent[node] != -1)
        {
            int p = parent[node];
            if (right[p] == node)
                code[top++] = 1;
            else
                code[top++] = 0;
            node = p;
        }

        printf("%c : ", ch[i]);

        for (j = top - 1; j >= 0; j--)
        {
            printf("%d", code[j]);
        }

        printf("\n");
    }

    return 0;
}
