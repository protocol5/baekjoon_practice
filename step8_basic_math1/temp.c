#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    int *k,*n;
    int cnt = 0;
    int Prefloor[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int Nextfloor[14] = {0,};
    int temp;

    scanf("%d",&T);
    k = (int *)malloc(sizeof(int) * T);
    n = (int *)malloc(sizeof(int) * T);
    
    while(cnt < T){
        printf("%d,%d\n", k[cnt],&k);
        scanf("%d %d", &k[cnt], n+cnt);
        //scanf("%d", n+cnt);
        cnt++;
        printf("T:%d k:%d n:%d\n\n",T,k[cnt],n[cnt]);
    }
    cnt = 0;
    
    while(cnt < T){
        for (int i = 0; i<k[cnt]; i++){
            temp = 1;
            for (int j=1; j<n[cnt]; j++){
                Nextfloor[j] = Prefloor[j]+temp;
                temp +=Nextfloor[j];
            }
            for (int p = 0; p < n[cnt] ; p++) Prefloor[p] = Nextfloor[p];
            printf (":%d\n", Prefloor[n[cnt]]);
        }
        cnt++;
    }
    // cnt = 0;
    // while(cnt < T){
    //     printf("%d\n",Prefloor[n[cnt]]);
    //     cnt++;
    // }


}