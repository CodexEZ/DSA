#include<stdio.h>
void display(int arr[], int size){
    //traversal
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    } 
    printf("\n");
}
int delete(int arr[], int index, int size){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int capacity=100, size=5, element=45, index=2;
    int arr[100]={1,2,3,0,12};
    delete(arr,index,size);
    size--;
    display(arr,size);
}