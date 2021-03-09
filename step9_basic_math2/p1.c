#include <stdio.h>

int main(){
    int N,IsPrime;
    int cnt = 0;
    scanf("%d",&N);
    while (0<N){
        scanf("%d",&IsPrime);
        if ( IsPrime==2 || IsPrime==3 || IsPrime==5 || IsPrime==7 ||
                IsPrime==11 || IsPrime==13 || IsPrime==17 || IsPrime==19 ||
                    IsPrime==23 || IsPrime==29|| IsPrime==31) cnt++;
        if ( IsPrime%2 && IsPrime%3 && IsPrime%5 && IsPrime%7 &&
                IsPrime%11 && IsPrime%13 && IsPrime%17 && IsPrime%19 &&
                    IsPrime%23 && IsPrime%29 && IsPrime%31 && IsPrime>31) cnt++;
        N--;
    }
    printf("%d",cnt);
}