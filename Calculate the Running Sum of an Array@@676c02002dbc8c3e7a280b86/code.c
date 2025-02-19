// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    int sum=0;
    for(int y=0;y<i;y++){
        printf("%d ",sum+=arr[y]);
    }
}