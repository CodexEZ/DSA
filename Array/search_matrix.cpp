#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat ={
        {1,4,7,11},
        {2,5,8,12},
        {3,6,9,16},
        {10,13,14,17}
    };
    int k =5;
    int i = 0,j = 3;
    bool flag = false;
    while(i<mat.size() && j>=0){
        if(mat[i][j] == k){
            flag = true;
            break;
        }
        if( mat[i][j] > k)
            j--;
        else
            i++;
        
    }
    flag == true ? cout<<"FOUND" : cout<<"NOT FOUND";
    
}