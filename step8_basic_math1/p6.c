#include <stdio.h>


int main(){
    int T,k,n;
    int cnt = 0;
    int Prefloor[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int Nextfloor[14] = {0,};
    int temp;

    scanf("%d",&T);

    while(cnt < T){
        scanf("%d", &k);
        scanf("%d", &n);
        if(n == 1)printf("1\n");
        else{
            for (int i = 0; i<k; i++){
                temp = 1;
                for (int j=1; j<n; j++){
                    Nextfloor[j] = Prefloor[j]+temp;
                    temp = Nextfloor[j];
                }
                for (int p = 1; p < n ; p++) Prefloor[p] = Nextfloor[p];
            }
            for (int q = 0; q < 14 ; q++) Prefloor[q] = q+1;
            printf("%d\n",Nextfloor[n-1]);
        }
        cnt++;
    }
    return 0;

}