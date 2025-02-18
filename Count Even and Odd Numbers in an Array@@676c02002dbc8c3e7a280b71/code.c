// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++){
        scanf("%d",&arr[a]);
    }
    int even=0,odd=0;
    for(int a=0;a<n;a++){
        if(arr[a]%2==0)
        even++;
        else
        odd++;
    }
    printf("%d %d",even,odd);
}