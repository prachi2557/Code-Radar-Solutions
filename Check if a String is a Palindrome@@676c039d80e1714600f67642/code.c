// Your code here...
#include<stdio.h>
int main(){
    char arr[50];
    int len=0;
    scanf("%s",&arr);
    while(arr[len]!='\0'){
        len++;
    }
    int arr2[len];
    for(int a=0;a<len;a++){
        arr2[a]=arr[a];
    }
    int len2=len-1;
    for(int a=0;a<len2;a++){
        int temp=arr[a];
        arr[a]=arr[len2];
        arr[len2]=temp;
        len2--;
    }
    int ispal=0;
    for(int x=0;x<len;x++){
        if(arr2[x]==arr[x]){
            ispal=1;
        }
        else{
            ispal=0;
            break;
        }
    }
    if(ispal==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}