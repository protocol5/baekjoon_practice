#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10000

void push(int arg);
int pop();
int size();
int empty();
int top();

int stack[MAX_SIZE] = {0,};
int idx = -1;

void push(int Arg){
    idx++;
    stack[idx] = Arg; 
}
int pop(){
    int temp;
    if(idx < 0 || stack[0] == '\0') return -1;
    else {
        temp = stack[idx];
        stack[idx--] = '\0';
        return temp;
    }
}
int size(){
    return idx+1;
}
int empty(){
    if ((idx < 0) || stack[0]=='\0') return 1;
    else return 0;
}
int top(){
    if((idx < 0) || stack[0]=='\0') return -1;
    else return stack[idx];
}


int main(){
    int a;
    //int *arr = malloc(sizeof(int));
    //int cnt = 0;
    char *cmd = malloc(10*sizeof(char));
    char *pu = "push";
    char *po = "pop";
    char *si ="size";
    char *to ="top";
    char *em = "empty";

    int Arg;
    memset(cmd,0,10*sizeof(char));
    scanf("%d%*c",&a);

    for(int i = 0; i<a; i++){
        gets(cmd);
        if(cmd[1]==pu[1]){
            Arg = atoi(cmd+5);
            push(Arg);
        }
        else if(!strcmp(cmd, po)){
            //arr[cnt++]=pop();
            printf("%d",pop());
        }
        else if(!strcmp(cmd, si)){
            printf("%d",size());
            //arr[cnt++]=size();
        }
        else if(!strcmp(cmd, em)){
            printf("%d",empty());
            //arr[cnt++]=empty();
        }
        else if(!strcmp(cmd, to)){
            printf("%d",top());
            //arr[cnt++]=top();
        }
        else {
            return 0;
        }
        memset(cmd,0,10*sizeof(char));
    }
    //for(int k=0; k<cnt; k++)printf("%d\n",arr[k]);
    //free(arr);
    free(cmd);

}