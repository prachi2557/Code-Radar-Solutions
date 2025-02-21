// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }   
    int m;
    scanf("%d",&m); 
    for(int a=0;a<i;a++){
        for(int b=a+1;b<i;b++){
            if(arr[a]+arr[b]==m){
                printf("%d %d\n",arr[a],arr[b]);
            }
        }
    }
}