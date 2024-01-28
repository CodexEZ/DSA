#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	for(int i=0;i<arr.size();i++){
		int sum = arr[i]+arr[i+1]+arr[i+2];
		if(sum == K){
			ans.push_back({arr[i],arr[i+1],arr[i+2]});
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
            return ans;
		}
	}
	if(ans.size()==0){
		ans.push_back({-1});
        cout<<-1<<endl;
        return ans;
	}
	else{
		return ans;
	}
}
int main(){
    vector<int> arr = {1 ,1, 2,2, 1,1};
    for(auto i : findTriplets(arr,6,4)){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}