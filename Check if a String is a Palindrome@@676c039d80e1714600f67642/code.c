// Your code here...
#include<stdio.h>
int main(){
    char arr[50];
    int len=0;
    scanf("%s",&arr);
    while(arr[len]!='\0'){
        len++;
    }
    int len2=len-1;
    for(int a=0;a<len;a++){
        int temp=arr[a];
        arr[a]=arr[len2];
        arr[len2]=temp;
        len2--;
    }
    printf("%s",arr);
}