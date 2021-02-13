#include <stdio.h>

int main(){
    int A,B,C;
    int cnt = 1;
    scanf("%d %d %d",&A,&B,&C);
    if (B>=C) {
        printf ("-1");
        return 0;
    }
    cnt=A/(C-B)+1;
    printf("%d",cnt);
    return 0;
}