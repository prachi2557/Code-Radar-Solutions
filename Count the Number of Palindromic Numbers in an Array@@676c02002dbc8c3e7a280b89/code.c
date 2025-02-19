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
    for(int y=0;y<i;y++){
    int num=arr[y],remainder,reversedNum=0,originalNum;
    originalNum=num;
    if(num>0){
    while (num!=0){           
        remainder=num%10;      
        reversedNum=reversedNum*10+remainder;     
        num/=10;                                 
    }
    if(originalNum==reversedNum)
    sum++;
    }}
    printf("%d",sum);
}