// Your code here...
void bubbleSort(array arr,int n){
    smallest=arr[0];
    for(int a=0;a<n;a++){
        for(int b=a+1;b<num;b++){
        if(arr[a]<smallest){
        int temp=arr[0];
        smallest=arr[a];
        arr[a]=temp;
        }}
    }
}
void printArray(array arr,int n){
    for(int a=0;a<num;a++){
        printf("%d ",arr[a]);
    }
}