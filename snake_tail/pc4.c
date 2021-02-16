//dummy game

#include <stdio.h>
#include <string.h>

#define MAX 10000

typedef struct Info{
    int time;
    int numOfApple;
    int line;
    int map[MAX];
    int X[100];
    char C[100];
} Data ;

void Up(int,Data);
void Down(int,Data);
void Left(int,Data);
void Right(int,Data);
void end(Data);

void end(Data data){
    printf("%d",data.time);
}

void Up(int now, Data data){
    printf("up\n");
    int p = now - data.line;
    printf("p : %d, time : %d \n",p, data.time);
    for(int i = 0; i < now/data.line; i++){
        if ((data.X[p]>0) && (data.map[p] < 1)){
            if (data.C[p] == 'D'){//R
                data.time++;
                Right(p,data);
                break;
            }
            if (data.C[p] == 'L'){//L    
                data.time++;
                Left(p,data);
                break;
            }            
        }
        if ((data.X[p]>0) && (data.map[p] > 1)){ // apple
            data.numOfApple--;
            if (data.numOfApple < 1){
                end(data);
            }
            else if (data.C[p] == 'D'){//R
                data.time++;
                Right(p,data);
                break;
            }
            else if(data.C[p] == 'L'){//L
                data.time++;
                Left(p,data);
                break;
            }            
        }
        p = p - data.line;        
        data.time++;
    }

}
void Down(int now, Data data){
    printf("down\n");
    int p = now + data.line;
    printf("p : %d, time : %d \n",p, data.time);
    for(int i = 0; i < data.line-(now/data.line+1); i++){
        if ((data.X[p]>0) && (data.map[p] < 1)){
            if (data.C[p] == 'L'){//R
                data.time++;
                Right(p,data);
                break;
            }
            if (data.C[p] == 'D'){//L
                data.time++;
                Left(p,data);
                break;
            }            
        }
        if ((data.X[p]>0) && (data.map[p] > 1)){ // apple
            printf("\nd end! time : %d",data.time++);
            data.numOfApple--;
            if (data.numOfApple < 1){
                end(data);
            }
            else if (data.C[p] == 'L'){//R
                data.time++;
                Right(p,data);
                break;
            }
            else if(data.C[p] == 'D'){//L
                data.time++;
                Left(p,data);
                break;
            }            
        }
        p = p + data.line;        
        data.time++;
    }
}
void Left(int now, Data data){
    printf("left\n");
    int p = now - 1;
    printf("p : %d, time : %d \n",p, data.time);
    for(int i = 0; i < now%data.line-1; i++){
        if ((data.X[p]>0) && (data.map[p] < 1)){
            if (data.C[p] == 'D'){//Up
                data.time++;
                Up(p,data);
                break;
            }
            if (data.C[p] == 'L'){//Down
                data.time++;
                Down(p,data);
                break;
            }            
        }
        if ((data.X[p]>0) && (data.map[p] > 1)){ // apple
            printf("\nl end! time : %d",data.time++);
            data.numOfApple--;
            if (data.numOfApple < 1){
                end(data);
            }
            else if (data.C[p] == 'D'){//Up
                data.time++;
                Up(p,data);
                break;
            }
            else if(data.C[p] == 'L'){//D
                data.time++;
                Down(p,data);
                break;
            }            
        }
        p--;        
        data.time++;
    }

}

void Right(int now, Data data){
    printf("right\n");
    int p = now + 1;
    printf("p : %d, time : %d \n",p, data.time);
    for(int i = 0; i < (data.line - now%data.line); i++){
        if ((data.X[p]>0) && (data.map[p] < 1)){
            if (data.C[p] == 'L'){//Up
                data.time++;
                Up(p,data);
                break;
            }
            if (data.C[p] == 'D'){//Down
                data.time++;
                Down(p,data);
                break;
            }            
        }
        if ((data.X[p]>0) && (data.map[p] > 1)){ // apple
            printf("\nr end! time : %d",data.time++);
            data.numOfApple--;
            if (data.numOfApple < 1){
                end(data);
            }
            else if (data.C[p] == 'L'){//Up
                data.time++;
                Up(p,data);
                break;
            }
            else if(data.C[p] == 'D'){//D
                data.time++;
                Down(p,data);
                break;
            }            
        }
        p++;        
        data.time++;
    }


}

int main(){

    int applePos[2*MAX]={0,};
    int lineChange;
    int pos;
    int x[100];
    int c[100];

    Data data;
    memset(&data, 0, sizeof(Data));
/*  
    for (int i = 0; 0<100; i++){
        data.X[i] = 0;
        data.C[i] = 0;
    }

    for(int i = 0 ; 0<MAX ; i ++) data.map[i] = 0;
*/



    scanf("%d", &data.line);
    getchar();
    scanf("%d", &data.numOfApple);
    getchar();

    for (int i = 0; i < data.numOfApple*2; i++){
        scanf("%d", &applePos[i]);
    }
    scanf("%d", &lineChange);

    for (int i = 0; i < lineChange; i++){
        scanf("%d %s", &x[i],&c[i]);
        data.X[x[i]] = 1;
        data.C[x[i]] = c[i];
    }
        //scanf("%d %s", &data.X[i], &data.C[i]);

    for (int i = 0; i<data.line; i++){
        if ((i%2 == 0) && (applePos[i] > 0)){ //짝수 배열에 x축 사과 위치 담김.
            pos = applePos[i]+(applePos[++i]-1)*data.line;
            printf("pos :%d \n", pos);
            data.map[pos] = 2;
        }
    }

    for(int i = 0; i < data.line; i++){
        if ((data.X[i]>0) && (data.map[i] < 1)){
            if (data.C[i] == 'D'){//down
                data.time++;
                Down(i,data);
                break;
            }      
        }
        if ((data.X[i]>0) && (data.map[i] > 1)){ // apple
            data.numOfApple--;
            if (data.numOfApple < 1){
                end(data);
            }
            else if(data.C[i] == 'D'){//Down
                data.time++;
                Down(i,data);
                break;
            }            
        }       
        data.time++;
    }

    return 0;

}