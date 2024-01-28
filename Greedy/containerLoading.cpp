#include<bits/stdc++.h>

using namespace std;

int Container(vector<int> a,int c){
    sort(a.begin(), a.end());
    vector<int>sol(a.size());
    int i = 0;
    int capacity = c;
    int weight = a[i];
    while((i<a.size())&&(weight<=capacity)){
        capacity = capacity - weight;
        sol[i]=1;
        weight = a[i++];
    }
    int ct = 0;
    for(auto i:sol){
        if(i==1){
            ct++;
        }
    }
    return ct;


}

int main(){
    vector<int> a={100,11,10,40,33,110,80,94};
    int c = 300;
    cout<<Container(a,c)<<endl;
}