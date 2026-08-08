#include <stdio.h>
int main()
{
    int n = 5;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("nhap A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("PT[%d] = %d\n", i + 1, A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 != 0)
            A[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("PT[%d] = %d\n", i + 1, A[i]);
    }
    int d = 3,c = 4;
    int B[d][c];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nxuat mang 2 chieu\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0;j < c; j++)
        {
            printf("B[%d][%d] = %d\t", i, j, B[i][j]);
            if(i==j || i+j==d-1){  
                printf("%d\t",B[i][j]);
            }else printf("        \t");
        }
        
        printf("\n");
    }
    return 0;
}