#include <stdio.h>

int main(){
    char a[4];
    char b[4];
    int c;
    char d[5];
    scanf("%s %s", a,b);
    printf("\n a: %s, b:%s \n",a,b);
    printf("test : %s",a);
    for (int i =0; i < 4; i++){
        d[i]=a[i]+b[i];
        //printf("c:%s",d[i]);
    }
    printf("\n\n d : %s",d);
    return 0 ;
}