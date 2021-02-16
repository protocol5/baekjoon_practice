#include <stdio.h>
#include <stdlib.h>

int main(void){
    int T;
    int *H,*W,*N,*h,*w;
    scanf("%d",&T);
    H = (int *)malloc(sizeof(int) * T);
    W = (int *)malloc(sizeof(int) * T);
    N = (int *)malloc(sizeof(int) * T);
    h = (int *)malloc(sizeof(int) * T);
    w = (int *)malloc(sizeof(int) * T);
    for (int i = 0; i<T ; i++)
        scanf("%d %d %d",&H[i],&W[i],&N[i]);
    
    for (int i = 0; i<T ; i++){
        if (N[i] % H[i] > 0){
            w[i] = N[i] / H[i] + 1; //row num
            h[i] = N[i] % H[i]; //floor
        }
        else {
            w[i] = N[i] / H[i];
            h[i] = H[i];
        }
        

        if(w[i]<10) printf("%d0%d",h[i],w[i]);
        else printf("%d%d",h[i],w[i]);
        if (i == T-1) break;
        else printf("\n");
    }

    return 0;
}