#include<bits/stdc++.h>
using namespace std;
int main(){
    //Write code here
    vector<int> nums = {5,-2,4,6,3,1,-21};
    int i = 0, j = 0,k=3;
    int sum = 0;
    int maxsum = 0;
    while(j<nums.size()){
        if((j-i) != k){
            sum = sum + nums[j++];
        }
        else if ((j-i) == k){
            sum = sum - nums[i++];
            sum = sum + nums[j++];
        }
        maxsum = max(sum,maxsum);
    }
    cout<<maxsum;
}