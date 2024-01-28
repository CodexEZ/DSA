#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,3,7,5};
    vector<int> temp;
    int n = nums.size();
    int prod = 1;
    for(int i=0;i<n;i++){
        prod = prod * nums[i];
    }
    for(auto i:nums){
        cout<<(prod/i)<<" ";
    }
}