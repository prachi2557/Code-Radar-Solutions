// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    for(int a=0;a<i;a++){
        int temp=0;
        for(int b=a;b<i-a;b++){
            if (arr[b]==arr[a])
            temp++;
        }
        printf("%d %d\n",arr[a],temp);
    }
}