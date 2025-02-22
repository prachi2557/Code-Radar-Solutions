// Your code here...
#include<stdio.h>
int main(){
    char arr[50];
    scanf("%s",&arr);
    for(int a=sizeof(arr)-1;a>0;a++){
        printf("%c",arr[a]);
    }
}