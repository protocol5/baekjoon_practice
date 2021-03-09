#include <stdio.h>

int main(){
    int prime[100000]={0,1,2,3,};
    int M,N,P;
    int index=3;
    int cnt = 2;

    scanf("%d %d",&M,&N);

    for(int i=2; i<N; i++){
        for(int j=2; j<i; j++){
            P=prime[j];
            if(P==0)break;
            else if(i%P==0) break;
            else if(prime[j+1]==0){
                prime[index] = j+1;
                index++;
            }
        }
    }

    for (int i=M; i<N; i++){
        if(prime[i]==0) break;
        printf("%d\n",prime[i]);
    }

    return 0;
}