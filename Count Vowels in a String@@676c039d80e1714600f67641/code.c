// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    char arr[50];
    int len=0;
    scanf("%s",&arr);
    while(arr[len]!='\0'){
        len++;
    }
    int vow=0;
    for(int a=len-1;a>=0;a--){
        if(arr[a]=='a'||arr[a]=='e'||arr[a]=='i'||arr[a]=='o'||arr[a]=='u'){
            vow++;
        }
    }
    printf("%d",vow);
}