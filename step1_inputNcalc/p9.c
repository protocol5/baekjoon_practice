#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d\n%d",&a,&b,&c);
    printf("%d\n%d\n%d\n%d",(a+b)%c,((a%c)+(b%c))%c,(a*b)%c,((a%c)*(b%c))%c);
    return 0;
}
