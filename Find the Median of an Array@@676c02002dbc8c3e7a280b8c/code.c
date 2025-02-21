// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }   
    for(int y=0;y<i;y++){     
        for(int x=y+1;x<i;x++){
            if (arr[x]<arr[y]){
                int temp=arr[y];
                arr[y]=arr[x];
                arr[x]=temp;
            }
        }
    }
    int med;
    if(i%2==0){
        med=(arr[(int)i/2]+arr[(int)((i/2)-1)])/2;
    }
    else{
        med=arr[(int)i/2];
    }
    printf("%d",med);
}