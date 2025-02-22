// Your code here...
#include<stdio.h>
int main(){
    char arr[50];
    int len=0;
    scanf("%s",&arr);
    while(arr[len]!='\0'){
        len++;
    }
    for(int a=len-1;a>0;a--){
        printf("%c",arr[a]);
    }
}