#include <stdio.h>
int main() {
    // Khai bao bien
    float a, b, c, p, s;

    // Nhap du lieu tu ban phim
    printf("Nhap do dai canh a: ");
    scanf("%f", &a);

    printf("Nhap do dai canh b: ");
    scanf("%f", &b);

    printf("Nhap do dai canh c: ");
    scanf("%f", &c);

    // Cong thuc tinh chu vi va dien tich
    p = a + b + c;
    s = (a + b + c) / 2;

    // Xuat du lieu ra man hinh dung dinh dang yeu cau (lam tron 2 chu so thap phan)
    printf("\nChu vi tam giac: %.2f\n", p);                                
    printf("Dien tich tam giac: %.2f\n", s);        
    return 0;
}