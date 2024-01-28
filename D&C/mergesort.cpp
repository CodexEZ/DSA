#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int s, int mid, int e){
    int subArrayOne = mid-s+1;
    int subArrayTwo = e-mid;

    int leftArray[subArrayOne];
    int rightArray[subArrayTwo];

    for(int i=0;i<subArrayOne;i++){
        leftArray[i] = a[s+i];
    }
    for(int i=0;i<subArrayTwo;i++){
        rightArray[i] = a[mid+1+i];
    }
    int indexOne = 0, indexTwo = 0, indexMerged = s;;
    while(indexOne<subArrayOne && indexTwo<subArrayTwo){
        if(leftArray[indexOne]<=rightArray[indexTwo]){
            a[indexMerged]=leftArray[indexOne];
            indexOne++;
        }
        else{
            a[indexMerged] = rightArray[indexTwo];
            indexTwo++;
        }
        indexMerged++;
    }
    while(indexOne<subArrayOne){
        a[indexMerged++]=leftArray[indexOne++];
    }
    while(indexTwo<subArrayTwo){
        a[indexMerged++] = rightArray[indexTwo++];
    }
}
void mergeSort(int a[], int s , int e){
    if(s<e){
        int mid = (s+e)/2;
        mergeSort(a,s,mid);
        mergeSort(a,mid+1,e);
        merge(a,s,mid,e);
    }
}


int main(){
    int a[]={1,5,3,10,8,2};
    int n = sizeof(a)/sizeof(a[0]);
    int s = 0;
    int e = n-1;
    mergeSort(a,s,e);
    for(auto i:a){
        cout<<" "<<i;
    }
    cout<<endl;
}