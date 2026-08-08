#include <stdio.h>
#include <math.h>

int findMax(int a, int b, int c)
{
    int Max = a;
    if (Max < b)
    {
        Max = b;
    }
    if (Max < c)
    {
        Max = c;
    }
    return Max;
}

int checkYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void checkTriangle(float *a, float *b, float *c)
{
    printf("Nhap 3 canh cua tam giac: ");
    while (scanf("%f%f%f", a, b, c) != 3 || *a <= 0 || *b <= 0 || *c <= 0 || !(*a + *b > *c && *a + *c > *b && *b + *c > *a))
    {
        while (getchar() != '\n')
            ;

        printf("Khong phai 3 canh tam giac!\n");
        printf("Vui long nhap lai 3 canh: ");
    }
}

int main()
{
    int chon;

    do
    {
        printf("\n+---------------------------------------------+\n");
        printf("|           MENU CHUONG TRINH LAB 5           |\n");
        printf("+---------------------------------------------+\n");
        printf("| 1. Tim gia tri lon nhat trong 3 so          |\n");
        printf("| 2. Kiem tra nam nhuan                       |\n");
        printf("| 3. Hoan vi 2 con so (su dung con tro)       |\n");
        printf("| 4. Kiem tra va phan loai tam giac           |\n");
        printf("| 5. Thoat chuong trinh                       |\n");
        printf("+---------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            printf("Ban da chon chuc nang 1: Tim gia tri lon nhat trong 3 so.\n");
            int a, b, c;
            printf("Nhap 3 so nguyen: ");
            scanf("%d%d%d", &a, &b, &c);
            printf("Max = %d\n", findMax(a, b, c));
            break;
        }
        case 2:
        {
            printf("Ban da chon chuc nang 2: Kiem tra nam nhuan.\n");
            int year;
            printf("Nhap nam: ");
            scanf("%d", &year);

            if (checkYear(year))
            {
                printf("Nam %d la nam nhuan.\n", year);
            }
            else
            {
                printf("Nam %d khong phai nam nhuan.\n", year);
            }
            break;
        }
        case 3:
        {
            printf("Ban da chon chuc nang 3: Hoan vi 2 con so (su dung con tro).\n");
            int a, b;
            printf("Nhap so thu nhat a = ");
            scanf("%d", &a);
            printf("Nhap so thu hai b = ");
            scanf("%d", &b);

            printf("Truoc khi doi: a = %d, b = %d\n", a, b);
            swap(&a, &b);
            printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);
            break;
        }
        case 4:
        {
            printf("Ban da chon chuc nang 4: Kiem tra va phan loai tam giac.\n");
            float a, b, c;
            checkTriangle(&a, &b, &c);

            int vuong = (fabs(a * a + b * b - c * c) < 0.01 || fabs(a * a + c * c - b * b) < 0.01 || fabs(b * b + c * c - a * a) < 0.01);

            if (a == b && b == c)
            {
                printf("Ket qua: Tam giac deu\n");
            }
            else if (a == b || a == c || b == c)
            {
                if (vuong)
                {
                    printf("Ket qua: Tam giac vuong can\n");
                }
                else
                {
                    printf("Ket qua: Tam giac can\n");
                }
            }
            else if (vuong)
            {
                printf("Ket qua: Tam giac vuong\n");
            }
            else
            {
                printf("Ket qua: Tam giac thuong\n");
            }
            break;
        }
        case 5:
            printf("Dang thoat chuong trinh...\n");
            break;

        default:
            printf("Vui long chon so tu 1 den 5!\n");
            break;
        }
       
    } while (chon != 5);

    return 0;
}
