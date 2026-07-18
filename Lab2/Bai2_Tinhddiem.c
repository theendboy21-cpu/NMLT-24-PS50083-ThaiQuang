#include <stdio.h>

int main(){
    float diem;
    printf("Nhap diem cua sinh vien: ");
    scanf("%f", &diem);

    if(diem>=5){
        printf("Sinh vien do\n");
    }
    else{
        printf("Sinh vien rot\n");
    }
//xep loai
// 0<= Yeu <=5 <= Trung binh <=7 < Kha <=8 < Gioi <=10
// diem nam trong khoang 0-10
    if(diem>=8){
        printf("Sinh vien xep loai Gioi\n");
    }
    else if(diem>=7){
        printf("Sinh vien xep loai Kha\n");
    }
    else if(diem>=5){
        printf("Sinh vien xep loai Trung binh\n");
    }
    else{
        printf("Sinh vien xep loai Yeu\n");
    }
    return 0;
}