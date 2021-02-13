#include <stdio.h>

int main(void){
    int a,b,c,x,y,z,alpha,beta;
    scanf("%d\n%d",&alpha,&beta);
    a = alpha/100;
    b = (alpha/10)%10;
    c = alpha%10;
    x = beta/100;
    y = (beta/10)%10;
    z = beta%10;
    printf("%d\n%d\n%d\n%d",alpha*z,alpha*y,alpha*x,alpha*beta);
    return 0;
}
