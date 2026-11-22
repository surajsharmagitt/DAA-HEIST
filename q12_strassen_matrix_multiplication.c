#include <stdio.h>

int main(void)
{
    int A[2][2], B[2][2], C[2][2];
    int a, b, c, d, e, f, g, h;
    int M1, M2, M3, M4, M5, M6, M7;
    int i, j;

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

    a = A[0][0];
    b = A[0][1];
    c = A[1][0];
    d = A[1][1];

    e = B[0][0];
    f = B[0][1];
    g = B[1][0];
    h = B[1][1];

    M1 = (a + d) * (e + h);
    M2 = (c + d) * e;
    M3 = a * (f - h);
    M4 = d * (g - e);
    M5 = (a + b) * h;
    M6 = (c - a) * (e + f);
    M7 = (b - d) * (g + h);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;

    printf("\nResultant Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
