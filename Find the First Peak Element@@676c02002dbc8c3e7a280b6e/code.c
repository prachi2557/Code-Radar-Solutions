// Your code here...
#include<stdio.h>
int main(){
    int i,a;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    // for(int x=0;x<i;x++){
    //     printf("%d ",arr[x]);
    // }        
    if(a==0 && arr[0]>arr[1]){
            printf("%d",arr[a]);
    }
    if(a==i-1 && arr[i-1]>arr[i-2]){
        printf("%d",arr[i-1]);
    }
    for(int a=1;a<i-1;a++){
        if (arr[a]>arr[a+1] && arr[a]>arr[a-1]){
        printf("%d",arr[a]);
        }
    }
    printf("-1");
}