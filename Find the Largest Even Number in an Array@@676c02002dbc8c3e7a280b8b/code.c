// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }   
    for(int y=0;y<i;y++){     
        for(int x=y+1;x<i;x++){
            if (arr[x]>arr[y]){
                int temp=arr[y];
                arr[y]=arr[x];
                arr[x]=temp;
            }
        }
    }
    int larg=-1;
    for(int y=0;y<i;y++){
        if(arr[y]%2==0){
        larg=arr[y];
        break;}
    }
    printf("%d",larg);
}