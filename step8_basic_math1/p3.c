#include <stdio.h>

int main(){

    int son = 1, par = 1;
    int N;
    int i=1, SMax = 1, PMax = 0;

    scanf("%d",&N);

    if(N==1) {printf("1/1"); return 0;}

    while(i<N+1){
        i++;
        if(i>N) break;
        son = 1;
        SMax = SMax + 2;
        while(son<SMax){
            i++;
            if(i>N) break;
            son++;
            
        }
        while(son>1){
            i++;
            if(i>N) break;
            son--;
        }
    }

    i = 0;
    while(i<N+1){
        i++;
        if(i>N) break;
        par = 1;
        PMax = PMax + 2;
        while(par<PMax){
            i++;
            if(i>N) break;
            par++;
            
        }
        while(par>1){
            i++;
            if(i>N) break;
            par--;
        }
    }

    printf("%d/%d ", son,par);
    return 0;

}