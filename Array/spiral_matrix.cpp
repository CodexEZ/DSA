#include<bits/stdc++.h>
using namespace std;
void print(vector<int>nums){
    for(auto i:nums){
        cout<<i<<" ";
    }
}
void print_spiral(vector<vector<int>> matrix){
    int row = matrix.size()-1 , col = matrix[0].size()-1, colstart = 0, rowstart = 0;
    vector<int> res;
    int dir = 0 , size = (row+1)*(col+1), count = 0;
    while(count<size){
        switch (dir)
        {
        case 0:
            for(int i = colstart; i<= col;i++){
                res.push_back(matrix[rowstart][i]);
                count++;
            }
            rowstart++;
            dir = 1;
            break;

        case 1:
            for(int i = rowstart ;i<=row;i++){
                res.push_back(matrix[i][col]);
                count++;
            }
            col--;
            dir = 2;
            
            break;
        case 2:
            for(int i= col; i>=colstart;i--){
                res.push_back(matrix[row][i]);
                count++;
            }
            row--;
            dir = 3;
            break;
        
        case 3:
            for(int i = row; i>=rowstart;i--){
                res.push_back(matrix[i][colstart]);
                count++;
            }
            colstart++;
            dir = 0;
        }
        

    }
    print(res);
}


int main(){
    vector<vector<int>> matrix = {
        // {1,2,3,4},
        // {5,6,7,8},
        // {9,10,11,12}
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print_spiral(matrix);


}