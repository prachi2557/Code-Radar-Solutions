// Your code here...
#include<stdio.h>
int main(){
    int i,m;
    scanf("%d %d",&i,&m);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    int sum=0;
    for(int y=0;y<i;y++){
        if(arr[y]>m)
        sum++;
    }
    printf("%d",sum);
}