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
    for(int y=0;y<i;y++){
        if(arr[y]>larg){
            larg=arr[y];
        }
    }
    if(larg<0){
        printf("1");
    }
    else{
        int sum=0;
        int run;
        run=larg*(larg+1)/2;
        printf("%d",run);
        for(int x=0;x<i;x++){
        if(arr[x]>0){
            sum+=arr[x];
        }
        printf("%d",run-sum);
    }
    }
}