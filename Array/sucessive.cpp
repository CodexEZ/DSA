#include<bits/stdc++.h>
using namespace std;

int successiveSum(vector<int> nums, int n){
    int sum = 0;
    for(int i=n-1; i<nums.size();i = i+n){
        sum += nums[i];
    }
    return sum;
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    int len;
    cin>>len;
    for(int i=0;i<len;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<successiveSum(nums,n);
}