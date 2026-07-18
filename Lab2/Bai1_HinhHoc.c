#include <stdio.h>
#include <math.h>

int main() {   
    
    float a, b, c, p, S;    
    printf("Nhap do dai 3 canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);

    
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Dien tich tam giac la: %.2f\n", S); 
    
    printf("Chu vi tam giac la: %.2f\n", p);
    printf("Dien tich tam giac la: %.2f\n", S);
    return 0;
}