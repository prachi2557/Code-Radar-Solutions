// Your code here...
void bubbleSort(int arr[],int n){
    for(int a=0;a<n-1;a++){
        for(int j=0;j=n-a-1;j++){
        if(arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }}
    }
}
void printArray(int arr[],int n){
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
}