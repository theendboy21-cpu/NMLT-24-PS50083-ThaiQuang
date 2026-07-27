#include <stdio.h>

int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------+\n");
        printf("| MENU CHUONG TRINH LAB 4.              |\n");
        printf("+---------------------------------------+\n");
        printf("| 1. Tinh trung binh tong so chia het 2 |\n");
        printf("| 2. Kiem tra so nguyen to              |\n");
        printf("| 3. Kiem tra so chinh phuong           |\n");
        printf("| 4. Thoat chuong trinh                 |\n");
        printf("+---------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 4): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            printf("\n--- Ban da chon chuc nang 1: Tinh trung binh tong so chia het cho 2 ---\n");
            int min, max;
            int tong = 0;
            int dem = 0;

            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);

            int i = min;
            while (i <= max)
            {
                if (i % 2 == 0)
                {
                    tong = tong + i;
                    dem = dem + 1;
                }
                i = i + 1;
            }
            if (dem > 0)
            {
                float trungBinh = (float)tong / dem;
                printf("Trung binh tong la: %.2f\n\n", trungBinh);
            }
            else
            {
                printf("Khong co so chan nao trong khoang nay.\n\n");
            }
            break;
        }
        case 2:
        {
            printf("\n--- Ban da chon chuc nang 2: Kiem tra so nguyen to ---\n");
            int x;
            printf("Nhap x: ");
            scanf("%d", &x);

            int uoc = 0;
            for (int i = 1; i <= x; i++)
            {
                if (x % i == 0)
                {
                    uoc = uoc + 1;
                }
            }
            if (uoc == 2)
            {
                printf("%d la so nguyen to.\n\n", x);
            }
            else
            {
                printf("%d khong phai la so nguyen to.\n\n", x);
            }
            break;
        }
        case 3:
        {
            printf("\n--- Ban da chon chuc nang 3: Kiem tra so chinh phuong ---\n");
            int x;
            printf("Nhap x: ");
            scanf("%d", &x);
            int laSoChinhPhuong = 0;
            for (int i = 0; i <= x; i++)
            {
                if (i * i == x)
                {
                    laSoChinhPhuong = 1;
                    break;
                }
            }
            if (laSoChinhPhuong == 1)
            {
                printf("%d la so chinh phuong.\n\n", x);
            }
            else
            {
                printf("%d khong phai la so chinh phuong.\n\n", x);
            }
            break;
        }
        case 4:
            printf("\nCam on ban da su dung chuong trinh. Tam biet!\n");
            break;
        default:
            printf("\nChuc nang khong hop le! Vui long chon lai (1 - 4).\n\n");
        }
    } while (chon != 4);
    return 0;
}