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
        int last,sum=0;
        if(arr[a]<0){
            arr[a]*=-1;}
        while(arr[a]!=0){
            last=arr[a]%10;
            sum+=last;
            arr[a]/=10;
        }
        printf("%d ",sum);
    }
}