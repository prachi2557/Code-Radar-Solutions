// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }    
    for(int a=0;a<i;a++){
        int last,sum=0;
        int num=abs(arr[a]);
        while(num!=0){
            last=num%10;
            sum+=last;
            num/=10;
        }
        printf("%d ",sum);
    }
}