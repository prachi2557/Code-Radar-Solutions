// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }    
    int unique[i];
    int size=0;
    for(int a=0;a<i;a++){
        int found=1;
        for(int b=0;b<i;b++){
            if(a!=b && arr[a]==arr[b]){
                if(found==1){
                unique[size]=arr[b];
                size++;
                found=0;
                }
            }
        }
        if(found==1){
        unique[size]=arr[a];
        size++;
        }
    }
    for(int x=0;x<size;x++){
        printf("%d ",unique[x]);
    }   
}