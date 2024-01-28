#include<bits/stdc++.h>
using namespace std;

string merge_string(string a,string b){
    string merged = a + b;
    int i =0 , j = 0,start = 0,end = merged.size()-1;
    int m = a.size();
    int n = b.size();
    while(i<m && j<n){
        if(a[i] < b[j]){
            merged[start++] = a[i];
            merged[end--] = b[j]; 
        }
        else{
            merged[start++] = b[j];
            merged[end--] = a[i]; 
        }
        i++;
        j++;
    }
    while(i<m){
        merged[start++] = a[i++];
    }
    while(j<n){
        merged[start++] = b[j++];
    }
    return merged;

}

int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<merge_string(a,b);
}