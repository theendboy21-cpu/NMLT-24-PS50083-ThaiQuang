#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    do
    {
        printf("+----------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH ASSIGNMENT.          |\n");
        printf("+----------------------------------------------------+\n");
        printf("| 0.  Cam on da xem. Thoat chuong trinh.             |\n");
        printf("| 1.  Kiem tra so nguyen.                            |\n");
        printf("| 2.  Tim uoc chung va boi chung cua 2 so.           |\n");
        printf("| 3.  Tinh tien cho quan karaoke.                    |\n");
        printf("| 4.  Tinh tien dien.                                |\n");
        printf("| 5.  Doi tien.                                      |\n");
        printf("| 6.  Tinh lai suat vay ngan hang.                   |\n");
        printf("| 7.  Chuong trinh mua xe.                           |\n");
        printf("| 8.  Sap xep thong tin sinh vien.                   |\n");
        printf("| 9.  Game FPOLY-LOTT.                               |\n");
        printf("| 10. Chuong trinh toan phan so.                     |\n");
        printf("+----------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 10): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang 0. Cam on da xem. Thoat chuong trinh.\n");
            break;
        case 1:
            printf("Ban da chon chuc nang 1: Kiem tra so nguyen.\n");
            double x;
            printf("Nhap x: ");
            scanf("%lf", &x);
            if (x == (int)x)
            {
                int n = (int)x;
                int uoc = 0;
                for (int i = 1; i <= n; i++)
                {
                    if (n % i == 0)
                    {
                        uoc = uoc + 1;
                    }
                }

                if (uoc == 2)
                {
                    printf("%.4lf la so nguyen to.\n\n", x);
                }
                else
                {
                    printf("%.4lf khong phai la so nguyen to.\n\n", x);
                }
                int laSoChinhPhuong = 0;
                for (int i = 0; i <= n; i++)
                {
                    if (i * i == n)
                    {
                        laSoChinhPhuong = 1;
                        break;
                    }
                }

                if (laSoChinhPhuong == 1)
                {
                    printf("%.4lf la so chinh phuong.\n\n", x);
                }
                else
                {
                    printf("%.4lf khong phai la so chinh phuong.\n\n", x);
                }
            }
            else
            {
                printf("%.4lf khong phai la so nguyen to (vi khong phai so nguyen).\n\n", x);
                printf("%.4lf khong phai la so nguyen to.\n\n", x);
                printf("%.4lf khong phai la so chinh phuong.\n\n", x);
            }
            break;
        case 2:
            printf("Ban da chon chuc nang 2. Tim uoc chung va boi chung cua 2 so.\n");
            int soA, soB, USCLN, BSCNN;
            printf("Nhap so A = ");
            scanf("%d", &soA);
            printf("Nhap so B = ");
            scanf("%d", &soB);
            USCLN = 0;
            for (int i = 1; i < soA; i++)
            {
                if (soA % i == 0 && soB % i == 0)
                {
                    if (USCLN < i)
                    {
                        USCLN = i;
                    }

                    printf("Uoc so chung lon nhat la: %d\n", USCLN);
                }
            }
            BSCNN = (soA / USCLN) * soB;
            printf("Boi so chung nho nhat la: %d\n", BSCNN);
            break;
        case 3:
            printf("Ban da chon chuc nang 3. Tinh tien cho quan karaoke.\n");
            int gioBD, gioKT, soGio;
            float tienPhaitra;
            printf("Nhap gio bat dau:");
            scanf("%d", &gioBD);
            printf("Nhap gio ket thuc:");
            scanf("%d", &gioKT);
            soGio = gioKT - gioBD;
            if (gioBD < 12 || gioKT > 23 || gioBD > gioKT)
            {
                printf("Nhap sai gio hay nhap lai");
                return 0;
            }
            if (soGio < 3)
            {
                tienPhaitra = soGio * 150000;
                printf("so tien phai tra cho %d gio la: %.0f\n", soGio, tienPhaitra);
            }
            else
                tienPhaitra = 3 * 150000 + ((soGio - 3) * 150000 * 0.7);
            if (gioBD >= 14 && gioBD <= 17)
            {
                tienPhaitra = tienPhaitra * 0.9;
            }
            printf("Tong so tien phai tra cho %d gio la: %.0f\n", soGio, tienPhaitra);
            break;
        case 4:
            printf("Ban da chon chuc nang 4. Tinh tien dien.\n");
            double kwh, tienDien;
            printf("Nhap so kwh: ");
            scanf("%lf", &kwh);
            if (kwh <= 50)
            {
                // Bậc 1: Từ 0 đến 50 kWh
                tienDien = kwh * 1678;
            }
            else if (kwh <= 100)
            {
                // Bậc 2: Từ 51 đến 100 kWh
                tienDien = (50 * 1678) + ((kwh - 50) * 1734);
            }
            else if (kwh <= 200)
            {
                // Bậc 3: Từ 101 đến 200 kWh
                tienDien = (50 * 1678) + (50 * 1734) + ((kwh - 100) * 2014);
            }
            else if (kwh <= 300)
            {
                // Bậc 4: Từ 201 đến 300 kWh
                tienDien = (50 * 1678) + (50 * 1734) + (100 * 2014) + ((kwh - 200) * 2536);
            }
            else if (kwh <= 400)
            {
                // Bậc 5: Từ 301 đến 400 kWh
                tienDien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + ((kwh - 300) * 2834);
            }
            else
            {
                // Bậc 6: Từ 401 kWh trở lên
                tienDien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + ((kwh - 400) * 2927);
            }
            printf("Tong dien tieu thu: %.1lf kWh\n", kwh);
            printf("Tong so tien dien phai tra: %.0lf dong\n", tienDien);
            break;
        case 5:
            printf("Ban da chon chuc nang 5. Doi tien.\n");
            break;
        case 6:
            printf("Ban da chon chuc nang 6. Tinh lai suat ngan hang.\n");
            break;
        case 7:
            printf("Ban da chon chuc nang 7. Chuong trinh mua xe.\n");
            break;
        case 8:
            printf("Ban da chon chuc nang 8. Sap xep thong tinh sinh vien.\n");
            float diem;
            printf("Nhap diem cua sinh vien: ");
            scanf("%f", &diem);
            if (diem >= 0 && diem <= 10)
            {
                if (diem >= 9)
                {
                    printf("Hoc sinh gioi\n");
                }
                else if (diem >= 7)
                {
                    printf("Hoc sinh kha\n");
                }
                else if (diem >= 5)
                {
                    printf("Hoc sinh trung binh\n");
                }
                else
                {
                    printf("Hoc sinh yeu/kem\n");
                }
            }
            else
            {
                printf("Ban nhap diem khong hop le!\n");
            }
            break;
        case 9:
            printf("Ban da chon chuc nang 9. Game FPOLY-LOTT.\n");
            break;
        case 10:
            printf("Ban da chon chuc nang 10. Chuong trinh toan phan so.\n");
            break;
        default:
            printf("\nChuc nang khong hop le! Vui long chon lai (0 - 10).\n\n");
        }
    } while (chon != 0);

    return 0;
}