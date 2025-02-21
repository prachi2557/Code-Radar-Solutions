// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(int x=0;x<i;x++){
        if(arr[x]>arr[x-1] && arr[x]>arr[x+1]){
            printf("%d ",arr[x]);
        }
    }
}