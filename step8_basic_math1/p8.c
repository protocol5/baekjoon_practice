#include <stdio.h>
#define MAX 10000

int main(){
    int i = 0;
    char A[MAX] = {0,};
    char B[MAX] = {0,};

    scanf("%s %s", &A, &B);

    printf("%s", A[0]);
    printf("%s", A[2]);

    // while(A[i] != 0){
    //     printf("%d", &A[i]);
    // }


}