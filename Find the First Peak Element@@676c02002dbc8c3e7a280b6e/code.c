// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i],x,y;
    for(x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }            
    for(int a=0;a<i;a++){
        if (arr[a]>arr[a+1] && arr[a]>arr[a-1])
        printf("%d",arr[a]);
        break;
    }
}
