// Your code here...
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int x=0;x<i;x++){
        scanf("%d",&arr[x]);
    }    
    int uni[i];
    int index=0;
    for(int x=0;x<i;x++){
        int isdup=0;
        for(int y=0;y<index;y++){
            if(arr[x]==uni[y]){
                isdup=1;
                break;
            }
        }
        if(isdup==0){
            uni[index++]=arr[x];
        }
    } 
    for(int x=0;x<index;x++){
        printf("%d ",uni[x]);
    }
    for(int y=0;y<i;y++){     
        for(int x=y+1;x<i;x++){
            if (uni[x]<uni[y]){
                int temp=uni[y];
                uni[y]=uni[x];
                uni[x]=temp;
            }
        }
    }
    if(i>1){
    printf("%d",uni[1]);}
    else
    printf("-1");
}