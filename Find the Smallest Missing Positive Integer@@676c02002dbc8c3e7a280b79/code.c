// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }
    int larg=arr[0];
    for(int y=1;y<i;y++){
        if(arr[y]>larg){
            larg=arr[y];
        }
    }
    int arr2[larg];
    for(int a=0;a<larg;a++){
        arr2[a]=a+1;
    }
    for(int p=0;p<larg;p++){
        printf("%d ",arr2[p]);
    }
}