// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++){
        scanf("%d",&arr[a]);
    }
    int m;
    scanf("%d",&m);
    int found=0;
    for(int a=0;a<n;a++){
        if (m==arr[a]){
        printf("%d",a);
        found=1;
        break;
        }}
    if (!found){
    printf("-1");
    }
}