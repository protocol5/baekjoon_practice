#include <stdio.h>
#define     ARRAY   1000000001
int main(){
    int N,F,L;
    int cnt = 1;
    int dist = 2;
    char index[ARRAY];
    for (int i = 2; i<ARRAY; i++){
        index[i] = dist;
        if(cnt%6 == 0) dist++;
        cnt = cnt + cnt*(dist-1);
    }

    scanf("%d",&N);

    if (N==1) printf("1");
    
}
    범위     1, 2~7, 8~19, 20~37 38~61 62~91, 92~127 128~169
    개       1, 6,   12,    18,   24,   30,    36,     42 
    인덱스   1,  2,   3,     4,    5,    6,     7 ...
    6몫      0, 0,   1~3,  3~6,  6~10,  10~15,  15~21
    범위
    오프셋  -1, 0~5, 6~17, 18~35, 36~59, 60~89, 90~125
    (-2)    0   0    1~2,  3~4,  5~9,  10~14, 15~20
    3으로              0    1      1~3  3~4,    5~6
    2로                     0       0~1 
    
