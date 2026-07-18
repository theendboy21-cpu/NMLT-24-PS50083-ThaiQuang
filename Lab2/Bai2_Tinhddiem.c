#include <stdio.h>
#include   <math.h>
int main() {
    
    float toan, ly, hoa;
    float diemTrungBinh;

    
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);

    
    diemTrungBinh = (toan * 3 + ly * 2 + hoa) / 6.0f;


    printf("\n--- Ket Qua ---\n");
    printf("Diem trung binh cua sinh vien la: %.2f\n", diemTrungBinh);

    return 0;
}
