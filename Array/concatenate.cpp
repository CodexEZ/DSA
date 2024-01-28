#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> Concatenate(vector<int> &nums){
    int n = nums.size()*2;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(nums[i%nums.size()]);
    }
    return v;
}

int main(){
    vector<int> v = {1,2,3};
    for(auto i : Concatenate(v)){
        cout<<i<<" ";
    }
}