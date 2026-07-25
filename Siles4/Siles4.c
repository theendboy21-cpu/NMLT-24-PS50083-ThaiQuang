#include   <stdio.h>
int main(){
    int n,S;

    // for biết trước số lần lập
    // while, do while: chưa biết số lần lập

    // while, do while : có dùng đc cho trường hợp biết trước số lần lặp không? ==> được
    // for cho trường hợp không biết trước số lần lập không? ==> không
    // xuất các số bội của 4 từ 1-100
    for (int i=1; i<=100; i++){
        if (i%4==0)
        printf("%d\t",i);
    // S= 1+3+5+...+(2n+1)
    n=5;
    S=0;
    for(int i=1; i<=n; i++){
        
        S=S * (2*i +1);
    }    printf("%d\t%d\n",i,S);
    }
    for(int i=2; i<=10; i++)
    {
        for (int j=1; j<=10; j++){
            printf("%2d x %2d = %3d\t",i,j,i*j);
            printf("\n");
        }
};
    return 0;
}