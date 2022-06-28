#include<stdio.h>
void display(int arr[], int size){
    //traversal
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    } 
    printf("\n");
}
int insert(int arr[], int size, int capacity, int element, int index){
    if (size>=capacity){
        return -1;
    }
    for (int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];

    }
    arr[index]=element;
    
}
int main(){
    int capacity=100, size=5, element=45, index=3;
    int arr[100]={1,2,3,0,12};
    display(arr,size);
    insert(arr,size,capacity,element,index);
    size++;
    display(arr,size);
    return 0;
}