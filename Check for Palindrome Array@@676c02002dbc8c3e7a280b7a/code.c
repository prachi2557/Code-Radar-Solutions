// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }   
    int rev[i];
    for(int a=i-1;a<0;a--){
        for(int b=0;b<i;b++){
            rev[b]=arr[a];
        }
    }
    for(int y=0;y<i;y++){
        if(arr[y]==rev[y])
        printf("YES");
        else
        printf("NO");
    }
}