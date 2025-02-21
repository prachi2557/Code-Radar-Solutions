// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    int freq[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
        freq[x]=-1;
    }    
    for(int a=0;a<i;a++){
        if(freq[a]==-1){
            for(int b=a+1;b<i;b++){
                if(arr[a]==arr[b]){
                    freq[b]=0;
                }
            }
        }
    }  
    int uni[i];
    for(int x=0;x<i;x++){
        if(freq[x]!=0){
            for(int y=0;y<i;y++){
                uni[y]=arr[x];
            }
        }
    } 
    for(int x=0;x<i;x++){
        printf("%d ",uni[x]);
    }
    // for(int y=0;y<i;y++){     
    //     for(int x=y+1;x<i;x++){
    //         if (arr[x]<arr[y]){
    //             int temp=arr[y];
    //             arr[y]=arr[x];
    //             arr[x]=temp;
    //         }
    //     }
    // }
    // if(i>1 && arr[0]!=arr[1]){
    // printf("%d",arr[1]);}
    // else
    // printf("-1");
}