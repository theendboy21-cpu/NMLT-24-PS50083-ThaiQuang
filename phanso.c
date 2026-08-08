#include<stdio.h>

int main(){
    struct phanso
    {
        int tu;
        int mau;
    };
    struct phanso ps1, ps2, tongPS, hieuPS, tichPS, thuongPS;
    
    //Nhap phan so 1
    printf("Nhap phan so 1:\n");
    printf("Tu so: ");
    scanf("%d", &ps1.tu);
    printf("Mau so: ");
    scanf("%d", &ps1.mau); 
    
    //Nhap phan so 2
    printf("\nNhap phan so 2:\n");
    printf("Tu so: ");
    scanf("%d", &ps2.tu);
    printf("Mau so: ");
    scanf("%d", &ps2.mau);

    //KT mau so = 0
    if (ps1.mau == 0 || ps2.mau == 0) {
        printf("\nMau so phai khac 0!");
        return 1;
    }
    
    //Tổng
    tongPS.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    tongPS.mau = ps1.mau * ps2.mau;
    printf("\nTong: %d/%d + %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, tongPS.tu, tongPS.mau);
    
    //Hiệu
    hieuPS.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    hieuPS.mau = ps1.mau * ps2.mau;
    printf("\nHieu: %d/%d - %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, hieuPS.tu, hieuPS.mau);
    
    //Tích
    tichPS.tu = ps1.tu * ps2.tu;
    tichPS.mau = ps1.mau * ps2.mau;
    printf("\nTich: %d/%d * %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, tichPS.tu, tichPS.mau);
    
    //Thương
    if (ps2.tu == 0) {
        printf("\nKhong the chia vi phan so 2 bang 0!");
    } else {
        thuongPS.tu = ps1.tu * ps2.mau;
        thuongPS.mau = ps1.mau * ps2.tu;
        printf("\nThuong: %d/%d : %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, thuongPS.tu, thuongPS.mau);
    }
    
    return 0;
}
