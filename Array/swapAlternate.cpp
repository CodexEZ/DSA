#include<iostream>

using namespace std;

void printArray(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int a[],int size){
    for (int i=0;i<size;i=i+2){

        if(i+1<size){
            swap(a[i],a[i+1]);
        }
    }
}

int main(){
    int a[6]={1,2,3,4,5,6};
    int b[5]={1,2,3,4,5};
    swapAlternate(b,5);
    printArray(b,5);
}