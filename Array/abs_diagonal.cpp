#include<bits/stdc++.h>

using namespace std;

int absMat(vector<vector<int>> mat, int n){
    int left = 0, right =0 ;
    for(int i=0; i<n ;i++){
        left += mat[i][i];
        
        right += mat[i][n-i-1];
    }
    return abs(left-right);
}
int main(){
    vector<vector<int>> mat = {
        // {1,2,3},
        // {4,5,6},
        // {9,8,9}
        {11,2,4},
        {4,5,6},
        {10,8,-12}
    };
    int n = 3;
    cout<<absMat(mat,n);
}