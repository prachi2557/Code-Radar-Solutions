// Your code here...
#include<stdio.h>
int main(){
    char arr[50];
    scanf("%s",&arr[50]);
    for(int a=(int)(sizeof(arr)-1);a>0;a++){
        printf("%c",arr[a]);
    }
}