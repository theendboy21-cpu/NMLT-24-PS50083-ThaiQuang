#include <stdio.h>
#include <math.h>
int main()
{
    int chon, diem;
    float a, b, c, delta, x1, x2, x;
    double kwh, tienDien;
    do
    {
        printf("+-------------------------------+\n");
        printf("|  MENU CHUONG TRINH LAB 3.     |\n");
        printf("+-------------------------------+\n");
        printf("| 0. Thoat chuong trinh.        |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 3):  ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang: 0. Thoat chuong trinh.\n");
            break;
        case 1:
            printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
            printf("Nhap diem cua sinh vien: ");
            scanf("%d", &diem);
            if (diem >= 0 && diem <= 10)
            {
                if (diem >= 9)
                {
                    printf("Hoc sinh gioi\n");
                }
                else if (diem >= 7 && diem < 9)
                {
                    printf("Hoc sinh kha\n");
                }
                else if (diem >= 5 && diem < 7)
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
        case 2:
            printf("Ban da chon chuc nang: 2. Giai phuong trinh bac 2.\n");
            printf("Nhap he so a b c :");
            scanf(" %f %f %f", &a, &b, &c);
            if (a == 0)
            {
                // Trường hợp 1: Phương trình trở thành phương trình bậc nhất bx + c = 0
                if (b == 0 && c == 0)
                {
                    printf("Phuong trinh co vo so nghiem.\n");
                }
                else if (b == 0 && c != 0)
                {
                    printf("Phuong trinh vo nghiem.\n");
                }
                else
                { // b khac 0
                    x = -c / b;
                    printf("Phuong trinh co nghiem duy nhat x = %.2f\n", x);
                }
            }
            else
            {
                // Trường hợp 2: a khác 0, thực hiện tính toán Delta
                delta = b * b - 4 * a * c;

                if (delta < 0)
                {
                    printf("Phuong trinh vo nghiem.\n");
                }
                else if (delta == 0)
                {
                    x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep x = %.2f\n", x);
                }
                else
                { // delta lon hon 0
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co 2 nghiem rieng biet:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;
        case 3:
            printf("Ban da chon chuc nang: 3. Tinh tien dien.\n");
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
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);

    return 0;
}