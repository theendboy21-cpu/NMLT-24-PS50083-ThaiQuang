#include    <stdio.h>
int main(){
    int i,s;
    s=0;
    i=1;
    while (s<=10)
    {
        if(s+i>=10)
            break;
        s+=i;
        printf("%d %d\n",i,s);
        i++;
    }
    printf("%d\t%d\n",i-1,s);
    return 0;
}