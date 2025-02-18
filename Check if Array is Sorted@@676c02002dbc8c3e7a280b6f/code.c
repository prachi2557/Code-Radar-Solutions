// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i],x,y;
    for(x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }            
    int arr2[i];
    for(x=0;x<i;x++){
        arr2[x]=arr[x];
    }  
    for(y=0;y<i;y++){     
        for(x=y+1;x<i;x++){
            if (arr[x]>arr[y]){
                int temp=arr[y];
                arr[y]=arr[x];
                arr[x]=temp;
            }
        }
    }
    if(arr2[i]==arr[i]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}