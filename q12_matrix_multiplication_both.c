#include <stdio.h>

int main(void)
{
    int A[2][2], B[2][2];
    int C_normal[2][2], C_strassen[2][2];
    int a, b, c, d, e, f, g, h;
    int M1, M2, M3, M4, M5, M6, M7;
    int i, j, k;

    printf("Enter elements of Matrix A (2x2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (2x2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C_normal[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                C_normal[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    a = A[0][0]; b = A[0][1];
    c = A[1][0]; d = A[1][1];
    e = B[0][0]; f = B[0][1];
    g = B[1][0]; h = B[1][1];

    M1 = (a + d) * (e + h);
    M2 = (c + d) * e;
    M3 = a * (f - h);
    M4 = d * (g - e);
    M5 = (a + b) * h;
    M6 = (c - a) * (e + f);
    M7 = (b - d) * (g + h);

    C_strassen[0][0] = M1 + M4 - M5 + M7;
    C_strassen[0][1] = M3 + M5;
    C_strassen[1][0] = M2 + M4;
    C_strassen[1][1] = M1 - M2 + M3 + M6;

    printf("\n--- Method 1: Normal Multiplication (8 multiplications, O(n^3)) ---\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", C_normal[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Method 2: Strassen's Algorithm (7 multiplications, O(n^2.81)) ---\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", C_strassen[i][j]);
        }
        printf("\n");
    }

    printf("\nAdvantage: Strassen replaces 1 multiplication with additions/subtractions, saving asymptotic complexity.\n");

    return 0;
}