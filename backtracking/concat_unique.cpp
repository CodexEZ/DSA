#include<bits/stdc++.h>
using namespace std;
int maxi = 0;
bool isUnique(string& str){
        int n = str.size();
        vector<int> mp(26,0);
        for(int i=0;i<n;i++){
            mp[str[i]-'a']++;
            if(mp[str[i]-'a']>1)
                return false;
        }
        return true;
}
void helper(vector<string>& arr, int i, int n, string curr,unordered_map<string,int>&memo){
    if(isUnique(curr)==false)
        return;
    if(i==n){
         if(curr.size() > maxi)
            {
                int size = curr.size();
                maxi = max(maxi, size); 
            }
        return;
    }
    helper(arr,i+1,n,curr+arr[i],memo);
    cout<<curr<<endl;
    helper(arr,i+1,n,curr,memo);
}
int main(){
    vector<string> str = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"};
    set<string> combine;
    int i=0;
    helper(str,i,str.size(),"");
    int maxs = 0;
    for(string i: combine){
           if(i.size()> maxs){
            maxs = i.size();
           }
    }
    cout<<maxs;
    
}