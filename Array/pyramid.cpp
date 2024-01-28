#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                a[i][j] = i+1;
            }
            else if(j%2 != 0 ){
                a[i][j] = a[i][j-1] + ((n-i)*2 - 1);
            }
            else if(j%2 == 0){
                a[i][j] = 1 + max (a[i-1][j-1],a[i-1][j]);
            }
        }
    }
    for(auto i:a){
        for (int j:i){
            if(j != 0 ){
                cout<<j<<"  ";
            }
        }
        cout<<endl;
    }
}