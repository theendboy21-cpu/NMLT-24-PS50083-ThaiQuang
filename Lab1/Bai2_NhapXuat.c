#include <stdio.h>

int main() {
    // Khai báo các biến lưu trữ thông tin sinh viên
    char mssv[20];
    char hoTen[50];
    int namSinh;
    int tuoi;
    float diemTB;

    // Nhập dữ liệu từ bàn phím
    printf("Nhap ma so sinh vien: ");
    scanf("%19s", mssv);
    
    // Xóa bộ nhớ đệm trước khi nhập chuỗi có khoảng trắng
    while (getchar() != '\n'); 
    
    printf("Nhap ho va ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    
    // Xóa ký tự xuống dòng '\n' do fgets tự động thêm vào cuối chuỗi
    for (int i = 0; hoTen[i] != '\0'; i++) {
        if (hoTen[i] == '\n') {
            hoTen[i] = '\0';
            break;
        }
    }

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Tự động tính toán số tuổi dựa trên năm hiện tại là 2026
    tuoi = 2026 - namSinh;

    // Xuất dữ liệu ra màn hình theo đúng định dạng mẫu
    printf("\n--- THONG TIN SINH VIEN ---\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", diemTB);

    return 0;
}
