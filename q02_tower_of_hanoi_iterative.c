#include <stdio.h>

void moveDisk(int peg[3][20], int top[3], int p1, int p2)
{
    int disk;

    if (top[p1] == -1)
    {
        disk = peg[p2][top[p2]--];
        peg[p1][++top[p1]] = disk;
        printf("Move disk %d from %c to %c\n",
               disk, 'A' + p2, 'A' + p1);
    }
    else if (top[p2] == -1)
    {
        disk = peg[p1][top[p1]--];
        peg[p2][++top[p2]] = disk;
        printf("Move disk %d from %c to %c\n",
               disk, 'A' + p1, 'A' + p2);
    }
    else if (peg[p1][top[p1]] < peg[p2][top[p2]])
    {
        disk = peg[p1][top[p1]--];
        peg[p2][++top[p2]] = disk;
        printf("Move disk %d from %c to %c\n",
               disk, 'A' + p1, 'A' + p2);
    }
    else
    {
        disk = peg[p2][top[p2]--];
        peg[p1][++top[p1]] = disk;
        printf("Move disk %d from %c to %c\n",
               disk, 'A' + p2, 'A' + p1);
    }
}

void iterativeHanoi(int n)
{
    int peg[3][20] = {0};
    int top[3] = {-1, -1, -1};
    int i, totalMoves;

    for (i = n; i >= 1; i--)
    {
        peg[0][++top[0]] = i;
    }

    totalMoves = (1 << n) - 1;

    for (i = 1; i <= totalMoves; i++)
    {
        if (n % 2 == 1)
        {
            if (i % 3 == 1)
                moveDisk(peg, top, 0, 2);
            else if (i % 3 == 2)
                moveDisk(peg, top, 0, 1);
            else
                moveDisk(peg, top, 1, 2);
        }
        else
        {
            if (i % 3 == 1)
                moveDisk(peg, top, 0, 1);
            else if (i % 3 == 2)
                moveDisk(peg, top, 0, 2);
            else
                moveDisk(peg, top, 1, 2);
        }
    }
}

int main(void)
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\n--- Non-Recursive Method ---\n");
    iterativeHanoi(n);

    return 0;
}
