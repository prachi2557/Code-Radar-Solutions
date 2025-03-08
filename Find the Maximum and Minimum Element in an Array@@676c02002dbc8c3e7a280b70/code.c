// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++){
        scanf("%d",&arr[a]);
    }
    int smallest=arr[0];
    for(int a=0;a<n;a++){
        if(arr[a]<smallest)
        smallest=arr[a];
    }
    int greatest=arr[0];
    for(int a=0;a<n;a++){
        if(arr[a]>greatest)
        greatest=arr[a];
    }
    //printf("%d %d",smallest,greatest);
}