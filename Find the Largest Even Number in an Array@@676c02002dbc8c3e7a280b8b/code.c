// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }   
    int larg=-1;
    for(int a=0;a<i;a++){
        if(arr[a]%2==0){
            if(arr[a]>larg)
            larg=arr[a];
        }
    } 
    printf("%d",larg);
}