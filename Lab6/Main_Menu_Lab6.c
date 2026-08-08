#include <stdio.h>

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu %d = ", i + 1);
        scanf("%d", &a[i]);
    }
}

void tinhTrungBinhCong(int a[], int n)
{
    int sum = 0;
    int count = 0;

    nhapMang(a, n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            sum += a[i];
            count++;
        }
    }

    if (count == 0)
    {
        printf("Khong co so nao chia het cho ca 3 va 5.\n");
    }
    else
    {
        float tbc = (float)sum / count;
        printf("Trung binh cong = %.2f\n", tbc);
    }
}

void timMaxMin(int a[], int n)
{
    nhapMang(a, n);

    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);
}

void sapXepGiamDan(int a[], int n)
{
    nhapMang(a, n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void nhapMaTran(int mt[100][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Nhap phan tu [%d][%d] = ", i, j);
            scanf("%d", &mt[i][j]);
        }
    }
}

void maTranBinhPhuong(int mt[100][100], int r, int c)
{
    nhapMaTran(mt, r, c);
    printf("Ma tran binh phuong la:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mt[i][j] * mt[i][j]);
        }
        printf("\n");
    }
}

void locSoLeMaTran(int mt[100][100], int r, int c)
{
    nhapMaTran(mt, r, c);
    int coSoLe = 0;
    printf("Cac so le va vi tri cua chung:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mt[i][j] % 2 != 0)
            {
                printf("Gia tri: %d tai vi tri [%d][%d]\n", mt[i][j], i, j);
                coSoLe = 1;
            }
        }
    }
    if (!coSoLe)
    {
        printf("Khong co so le nao trong ma tran.\n");
    }
}

int main()
{
    int chon;
    int a[100];
    int mt[100][100];
    int n, r, c;

    do
    {
        printf("\n+---------------------------------------------+\n");
        printf("|           MENU CHUONG TRINH LAB 6           |\n");
        printf("+---------------------------------------------+\n");
        printf("| 1. Tinh TBC cac so chia het cho 3 va 5      |\n");
        printf("| 2. Tim Min Max trong mang                   |\n");
        printf("| 3. Sap xep mang theo thu tu giam dan        |\n");
        printf("| 4. Ma tran binh phuong                      |\n");
        printf("| 5. Loc va xuat vi tri cac so le ma tran     |\n");
        printf("| 6. Thoat chuong trinh                       |\n");
        printf("+---------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 6): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1: Tinh TBC cac so chia het cho 3 va 5.\n");
            printf("Nhap so luong phan tu n = ");
            scanf("%d", &n);
            tinhTrungBinhCong(a, n);
            break;

        case 2:
            printf("Ban da chon chuc nang 2: Tim Min Max trong mang.\n");
            printf("Nhap so luong phan tu n = ");
            scanf("%d", &n);
            timMaxMin(a, n);
            break;

        case 3:
            printf("Ban da chon chuc nang 3: Sap xep mang theo thu tu giam dan.\n");
            printf("Nhap so luong phan tu n = ");
            scanf("%d", &n);
            sapXepGiamDan(a, n);
            break;

        case 4:
            printf("Ban da chon chuc nang 4: Ma tran binh phuong.\n");
            printf("Nhap so hang (r) va so cot (c) cua ma tran: ");
            scanf("%d %d", &r, &c);
            maTranBinhPhuong(mt, r, c);
            break;

        case 5:
            printf("Ban da chon chuc nang 5: Loc va xuat cac so le ma tran.\n");
            printf("Nhap so hang (r) va so cot (c) cua ma tran: ");
            scanf("%d %d", &r, &c);
            locSoLeMaTran(mt, r, c);
            break;

        case 6:
            printf("Ban da chon chuc nang 6: Thoat chuong trinh.\n");
            printf("Tam biet!\n");
            break;

        default:
            printf("Vui long chon tu 1 den 6!\n");
        }
    } while (chon != 6);

    return 0;
}
