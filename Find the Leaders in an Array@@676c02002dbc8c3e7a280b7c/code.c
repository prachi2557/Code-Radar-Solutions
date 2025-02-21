// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int a=0;a<i;a++){
        scanf("%d",&arr[a]);
    }
    for(int x=0;x<i-1;x++){
        int larg=1;
        for(int y=x;y<i;y++){
            if(arr[x]<arr[y]){
                larg=0;
                break;
            }
        }
        if(larg==1){
            printf("%d ",arr[x]);
        }
        
    }
    printf("%d",arr[i-1]);
}