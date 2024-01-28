#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> vec){
    vector<int> result(vec.size(),-1);
    stack<int> monoStack;

    for(int i=0;i<vec.size();i++){
        while(!monoStack.empty() && vec[i]>vec[monoStack.top()]){
            result[monoStack.top()] = vec[i];
            monoStack.pop();
        }
        monoStack.push(i);
    }
    return result;

}
int main(){
    vector<int> vec = {4,5,2,10,8};
    for(auto i:nextGreater(vec)){
        cout<<i<<" ";
    }
    
}