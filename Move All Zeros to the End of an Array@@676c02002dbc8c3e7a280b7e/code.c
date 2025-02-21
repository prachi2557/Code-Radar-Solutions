// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    int ZeroIndexNum=0;
    for(int a=0;a<i;a++){
        if(arr[a]!=0){
            arr[ZeroIndexNum++]=arr[a];
        }
    }
    for(int b=ZeroIndexNum;b<i;b++){
        arr[b]=0;
    }
    for(int x=0;x<i;x++){
        printf("%d ",arr[x]);
    }
}