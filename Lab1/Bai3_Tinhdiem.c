#include <stdio.h>

int main() {
    // Khai bao bien
    char mssv[20];
    char hoten[50];
    float toan, ly, hoa, diemtrungbinh;

    // Nhap du lieu tu ban phim
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);
    

    printf("Nhap ho va ten: ");

    scanf(" %[^\n]", hoten); 


    printf("Nhap diem toan: ");
    scanf("%f", &toan);

    printf("Nhap diem ly: ");
    scanf("%f", &ly);

    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    // Cong thuc tinh toan
    diemtrungbinh = (toan * 2 + ly + hoa) / 4;

    // Xuat du lieu ra man hinh dung dinh dang yeu cau (lam tron 2 chu so thap phan)
    printf("\nma so sinh vien: %s\n", mssv);
    printf("ho va ten: %s\n", hoten);
    printf("diem trung binh: %.2f\n", diemtrungbinh);

    return 0;
}
