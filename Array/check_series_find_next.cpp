#include<bits/stdc++.h>
using namespace std;

pair<string,int> series(vector<int>vec){
    int size = vec.size();
    if(vec[0] == vec[1] && vec[2] == (vec[0]+vec[1])){
        int n = vec[size-1] + vec[size-2];
        return {"fibonacci",n};
    }
    else{
        int diff = vec[1] - vec[0];
        if(vec[2] == vec[1]+diff){
            int n = vec[size-1]+diff;
            return {"ap",n};
        }
        else{
            int ratio = vec[1]/vec[0];
            int n = vec[size-1]*ratio;
            return {"gp",n};
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<series(nums).second;
}