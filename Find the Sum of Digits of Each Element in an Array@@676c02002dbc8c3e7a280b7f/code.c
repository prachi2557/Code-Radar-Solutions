// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d\n",&arr[x]);
    }    
    for(int a=0;a<i;a++){
        int last,sum=0;
        while(arr[a]>0){
            last=arr[a]/10;
            sum+=last;
            arr[a]=arr[a]-last*10;
        }
        printf("%d ",sum);
    }
}