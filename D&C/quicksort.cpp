#include<bits/stdc++.h>
using namespace std;


int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low-1;
    for(int j=low;j<=high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void QuickSort(int a[], int low, int high){
    if(low<high){
        int pi = partition(a,low,high);
        QuickSort(a,low,pi-1);
        QuickSort(a,pi+1,high);
    }
}
int main(){
    int a[] = {5,1,7,0,2,4};
    int e = 4;
    int s = 0;
    QuickSort(a,s,e);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
}