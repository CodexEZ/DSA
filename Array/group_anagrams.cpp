#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<string> words = {"pop","bat","tab","opp"};
   vector<vector<string>> res;
   int n = words.size();
   unordered_map <string, vector<string>> group;
   for(int i=0;i<n;i++){
    string s = words[i];
    sort(words[i].begin(),words[i].end());
    group[words[i]].push_back(s);
   }
   for(auto i: group){
    res.push_back(i.second);
   }
   for(auto i:res){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
   }
   
}