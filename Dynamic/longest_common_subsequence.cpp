#include<bits/stdc++.h>
using namespace std;
int main(){
    //Write code here
    string a = "ABCD";
    string b = "ACDF";
    int m = a.size();
    int n = b.size();
    int dp[m+1][n+1];
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[m][n];
    
}