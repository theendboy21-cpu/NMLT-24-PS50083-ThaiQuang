#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
    double chieuDai, chieuRong;
    double cvHcn, dtHcn;
    printf("Nhap chieu dai: ");
    scanf("%lf", &chieuDai);
    printf("Nhap chieu rong: ");
    scanf("%lf", &chieuRong);
    cvHcn = (chieuDai + chieuRong) * 2;
    dtHcn = chieuDai * chieuRong;

    printf("Chu vi HCN: %.2f\n", cvHcn);
    printf("Dien tich HCN: %.2f\n\n", dtHcn);

    double bk;
    double cvTron, dtTron;

    printf("Nhap ban kinh: ");
    scanf("%lf", &bk);
    cvTron = 2 * PI * bk;
    dtTron = PI * bk * bk;
    printf("Chu vi Hinh Tron: %.5f\n", cvTron);
    printf("Dien tich Hinh Tron: %.5f\n", dtTron);

    return 0;
}