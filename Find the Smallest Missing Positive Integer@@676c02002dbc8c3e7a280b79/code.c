// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }
    int larg=arr[0];
    for(int y=0;y<i;y++){
        if(arr[y]>larg){
            larg=arr[y];
        }
    }
    if(larg<0){
        printf("1");
    }
}