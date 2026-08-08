#include <stdio.h>
#include <string.h>
int main()
{
    // char hoTen[20]; //= {'A','B','C'};
    // char hoTen2[20];
    // char ngheNghiep[20];
    // printf("Nhap ho ten:");
    // gets(hoTen);
    // printf("Nhap nghe nghiep:");
    // gets(ngheNghiep);
    

    // strcpy(hoTen2,hoTen);

    // for (int i = 0; i < strlen(hoTen); i++)
    // {
    //     printf("%c", hoTen2[i]);
    // }
    // for (int i = 0; i < strlen(ngheNghiep); i++)
    // {
    //     printf("%c", ngheNghiep[i]);
    // }
    char string1[20]="FpT PoLYtechNic HCM";
    // char string2[20]="p";
    
    printf("chuoi 1: %s\n",string1);
    strlwr(string1);
    printf("chuoi 2: %s\n",string1);

    return 0;
}