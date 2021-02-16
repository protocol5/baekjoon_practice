#include <stdio.h>

int main(void){
    int N, A;
    if (1 != scanf("%d",&N)) return -1;

    if (0 == N%5){
        printf("%d",N/5);
        return 0;
    }

    for (int i=3; i < 13; i+=3){
        A = N - i;
        if ( A < 0) break;
        if ( 0 == A%5) {
            printf("%d", A/5 + i/3); 
            return 0;
        }
    }
    printf("-1");
    return 0;
}