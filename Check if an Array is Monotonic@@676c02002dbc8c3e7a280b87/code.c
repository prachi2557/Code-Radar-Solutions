// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }            
    int arr2[i];
    for(int x=0;x<i;x++){
        arr2[x]=arr[x];
    }  
    int arr3[i];
    for(int x=0;x<i;x++){
        arr3[x]=arr[x];
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
    for(int y=0;y<i;y++){     
        for(int x=y+1;x<i;x++){
            if (arr3[x]>arr3[y]){
                int temp=arr3[y];
                arr3[y]=arr3[x];
                arr3[x]=temp;
            }
        }
    }
    int sorted1=1;
    for (int x = 0; x < i; x++) {
        if (arr[x] != arr2[x]) {
            sorted1 = 0;
            break;
        }
    }
    int sorted2=1;
    for (int x = 0; x < i; x++) {
        if (arr3[x] != arr2[x]) {
            sorted2 = 0;
            break;
        }
    }
    if(sorted1==1 || sorted2==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
