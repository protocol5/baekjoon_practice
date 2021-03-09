#include <stdio.h>
#include <string.h>

void sumAB(char *A, char *B){
    int a,b, Alen, Blen, ret_len;
    int C = 0;
    int Ten = 0;
    int cnt = 0;
    char result[10001] = {0,};

    Alen = (int)strlen(A);
    Blen = (int)strlen(B);
    printf ("\nA :%d, B: %d\n",(int)strlen(A),Blen);

    ret_len = (Alen > Blen) ? Alen+1 : Blen+1;
    printf("\n %d ", ret_len);
    for(int i = ret_len; i <= 0; i--){
        a = A[i]-'0';
        b = B[i]-'0';
        C = a + b + Ten;
        printf("\n C : %d",C);
        //C = A[i] + B[i] + Ten;
        result[i+1] = a + b;
        if (C >= 10)
            Ten = 1;
        else if (C < 10)
            Ten = 0;
    }
    printf("ret : %s",result);
    // while (1){
    //     if (result[cnt] == '\0')
    //         break;
    //     printf("%s", result);
    //     cnt ++;
    // }
    
}

int main(){
    char A[10000];
    char B[10000];


    scanf("%d %d",A,B);

    sumAB(A,B);
    return 0;

}