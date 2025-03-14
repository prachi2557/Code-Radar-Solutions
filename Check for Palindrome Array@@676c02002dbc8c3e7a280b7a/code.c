// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }  
    int pal=1;
    for(int b=0;b<i;b++){
        if(arr[b]!=arr[i-b-1]){
            pal=0;
            break;
        }
    }
    if(pal)
    printf("YES");
    // else
    // printf("NO");
}