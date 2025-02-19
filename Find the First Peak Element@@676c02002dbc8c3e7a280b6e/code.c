// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    for(int a=0;a<i;a++){
    if(a==0 && arr[0]>arr[1]){
            printf("%d",arr[a]);
            break;
    }
    if(a==i-1 && arr[i-1]>arr[i-2]){
        printf("%d",arr[i-1]);
         break;
    }
    if (arr[a]>arr[a+1] && arr[a]>arr[a-1]){
        printf("%d",arr[a]);
        break;
    }
    }
}}