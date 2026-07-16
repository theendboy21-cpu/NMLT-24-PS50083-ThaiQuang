#include <stdio.h>

int main() {
    // Khai bao bien
    char mssv[20];
    char hoten[50];
    float toan, ly, hoa, diemtrungbinh;

    // Nhap du lieu tu ban phim
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);
    
    // Xoa bo nho dem de tranh loi khi nhap chuoi co khoang trang
    while (getchar() != '\n'); 

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);
    
    // Loai bo ky tu xuong dong \n do fgets doc vao
    for (int i = 0; hoten[i] != '\0'; i++) {
        if (hoten[i] == '\n') {
            hoten[i] = '\0';
            break;
        }
    }

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
