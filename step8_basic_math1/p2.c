#include <stdio.h>

int main(){
    int N,temp = 1;
    int cnt ;
    scanf("%d",&N);
    for(int i = 0; temp<N; i++){
        temp=temp+6*i;
        cnt = i;
    }
    if (N==1) printf("1");
    else printf("%d",cnt+1);

    return 0;
    
}
    // 범위     1, 2~7, 8~19, 20~37 38~61 62~91, 92~127 128~169
    // 개       1, 6,   12,    18,   24,   30,    36,     42 
    // 인덱스   1,  2,   3,     4,    5,    6,     7 ...
    // 6몫      0, 0,   1~3,  3~6,  6~10,  10~15,  15~21
