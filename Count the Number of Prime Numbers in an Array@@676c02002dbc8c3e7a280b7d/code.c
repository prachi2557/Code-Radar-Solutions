// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    int sum=0;
    for(int a=0;a<i;a++){
        int num=arr[a];
        if(num >= 2){
        int is_prime=1;
        for(a=2;a<num;a++){
            if(num%a==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            sum++;
        }
    }
    }
    printf("%d",sum);
}