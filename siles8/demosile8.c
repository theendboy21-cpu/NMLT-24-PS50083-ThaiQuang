#include <stdio.h>
int main()
{
    int n=1;
    char dsMaSV[40, 8];
    char dstenSV[40, 30];
    float dsDiemSV[40];
    // sap xep ds sv theo diem => thay doi vitri cua dsMaSV, dstenSV
    struct NgayThang
    {
       int ngay;
       int thang;
       int nam;
    };
    
    struct SinhVien{
          char maSV[8];
        char tenSV[30];
        float diemSV;
        struct NgayThang ngaySinh;
      
        
    }
    
    struct SinhVien dsSinhVien[40];
    {
       for(i=1;i<n;i++){
        printf("nhap ma so sinh vien [%d]:",i);
        gets(dsSinhVien[i].maSV);
        printf("Nhap ten Sinh vien[%d]",i);
        gets(dsSinhVien[i].tenSV);
        printf("nhap diem so sinh vien[%d]",i);
        scanf("%f",&dsSinhVien.diemSV)

        getchar();
       }
    };
    printf("Danh sach sinh vien: \n");
    printf("MaSV  TenSV       Diem SV");
    for(int i=00;i<n;i++){
         
    }
    return 0;
}