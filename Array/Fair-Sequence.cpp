#include<bits/stdc++.h>

using namespace std;


pair<int,int> goldenHouse(vector<int> a, int n, int k){
   int i=0,j=0;
   int sum = 0;
   while(j<n){
     sum = sum + a[j];
     if(sum == k){
        return {i,j};
     }
     else if( sum > k ){
        sum = 0;
        i=j;
     }
     else{
        j++;
     }
     cout<<j<<endl;
     
   }
   return {};
   
}

int main(){
    vector<int>vec = {1,1,1,1,1,1,3,5,2,5,18,1,18,4,8,3,14};
    int n = vec.size(), k=15;
    pair<int,int> ans = goldenHouse(vec,n,k);
    cout<< ans.first << " "<<ans.second<<endl;
}