#include <stdio.h>

struct NgayThang
{
   int ngay;
   int thang;
   int nam;
};

struct SinhVien
{
   char maSV[8];
   char tenSV[30];
   float diemSV;
   struct NgayThang ngaySinh;
};

int main()
{
   int n = 1;
   struct SinhVien dsSinhVien[40];

   printf("Nhap so luong sinh vien: ");
   scanf("%d", &n);
   getchar();

   // Vòng lặp nhập thông tin
   for (int i = 0; i < n; i++)
   {
      printf("Nhap thong tin sinh vien [%d]:\n", i + 1);

      printf("Nhap ma so sinh vien: ");
      gets(dsSinhVien[i].maSV);

      printf("Nhap ten sinh vien: ");
      gets(dsSinhVien[i].tenSV);

      printf("Nhap ngay sinh (ngay thang nam cach nhau bang khoang trang): ");
      scanf("%d %d %d", &dsSinhVien[i].ngaySinh.ngay,
            &dsSinhVien[i].ngaySinh.thang,
            &dsSinhVien[i].ngaySinh.nam);

      printf("Nhap diem so sinh vien: ");
      scanf("%f", &dsSinhVien[i].diemSV);

      getchar();
   }

   // Xuat ra man hinh
   printf("%-10s %-25s %-10s %-15s\n", "MaSV", "TenSV", "Diem SV", "Ngay Sinh");

   for (int i = 0; i < n; i++)
   {
      printf("%-10s %-25s %-10.2f %02d-%02d-%-9d\n",
             dsSinhVien[i].maSV,
             dsSinhVien[i].tenSV,
             dsSinhVien[i].diemSV,
             dsSinhVien[i].ngaySinh.ngay,
             dsSinhVien[i].ngaySinh.thang,
             dsSinhVien[i].ngaySinh.nam);
   }

   return 0;
}
