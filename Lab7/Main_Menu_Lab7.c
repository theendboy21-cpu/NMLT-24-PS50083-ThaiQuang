#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("\n+----------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 7           |\n");
        printf("+------------------------------------------------+\n");
        printf("| 1. Dem so nguyen am va phu am trong chuoi      |\n");
        printf("| 2. Dang nhap he thong (User & Password)        |\n");
        printf("| 3. Sap xep danh sach chuoi theo thu tu Alphabet|\n");
        printf("| 4. Ma tran binh phuong                         |\n");
        printf("| 5. Thoat chuong trinh                          |\n");
        printf("+------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            printf("Ban da chon chuc nang 1: Dem so nguyen am va phu am trong chuoi.\n");
            break;
        }
        case 2:
        {
            printf("Ban da chon chuc nang 2: Dang nhap he thong (User & Password).\n");
            break;
        }
        case 3:
        {
            printf("Ban da chon chuc nang 3: Sap xep danh sach chuoi theo thu tu Alphabet .\n");
            break;
        }
        case 4:
        {
            printf("Ban da chon chuc nang 4: Chuyen doi so thap phan sang nhi phan (chuoi).\n");
            break;
        }

        case 5:
        {
            printf("Ban da chon chuc nang 5: Thoat chuong trinh.\n");

            break;
        }
        default:
            printf("Vui long chon tu 1 den 6!\n");
        }
    } while (chon != 5);
    return 0;
}