#include <stdio.h>

int main(){
    int C,cnt=0;
    float T=0;
    int Array[1000]={0,};
    scanf("%d",&C);

    for(int i=0; i<C; i++){
        scanf("%d",&Array[0]);
        for(int j=1; j<=Array[0]; j++){
            scanf("%d", &Array[j]);
            T+=Array[j];
        }
        T=T/Array[0];
        for(int k=1; k<=Array[0]; k++){
            if(Array[k] > T) cnt++;
        }
        printf("%.3lf%%\n",((float)cnt/Array[0])*100);
        cnt = 0;
        T = 0;
    }
    return 0;
}