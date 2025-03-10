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
            int count = 1;
            for(int b=a+1;b<i;b++){
                if(arr[a]==arr[b]){
                    count++;
                    freq[b]=0;
                }
            }
        freq[a]=count;
        }
    }   
    for(int n=0;n<i;n++){
        if(freq[n] !=0){
            //printf("%d %d\n",arr[n],freq[n]);
        }
    }
}