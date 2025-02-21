// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }
    for(int a=0;a<i;a++){
        int larg=-1;
        for(int b=a;b<i;b++){
            if(arr[b]>a){
                larg=arr[b];
            }
        }
        printf("%d ",larg);
    }

}