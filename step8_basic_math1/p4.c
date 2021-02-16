#include <stdio.h>

int main(){
    int SnailPos = 0, daycnt = 0;
    int A,B,V, diff;
    scanf("%d %d %d", &A, &B, &V);
    diff = A - B;
    SnailPos = V - A; 
    if (SnailPos%diff > 0) daycnt = SnailPos / diff + 2;
    else daycnt = SnailPos / diff + 1; 
    printf("%d",daycnt);

    return 0;
}