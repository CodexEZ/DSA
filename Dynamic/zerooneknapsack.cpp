#include<bits/stdc++.h>
using namespace std;

int max(int a , int b){return a<b?b:a;}
void display( vector<vector<int>> a, int rows, int cols){
    
    for(int i = 0;i<rows-1;i++){
        for(int j=0;j<=cols-1;j++){
            cout<<"  "<<a[i][j]<<"  ";
            
        }
        
        cout<<endl;
    }
    cout<<"------------------------------------------------"<<endl;
}
int knapsack(int cap, int wt[], int prof[], int n){
    vector<vector<int>>ans(n+1,vector<int>(cap+1));
    int rows = n+1, cols = cap+1;
    for(int i=0;i<=n;i++){
        for(int w=0;w<=cap;w++){
            if(i==0||w==0){
                ans[i][w]=0;
            }
            else if(wt[i-1]<=w){
                ans[i][w]=max(ans[i-1][w], ans[i-1][w-wt[i-1]]+prof[i-1]);
            }
            else{
                ans[i][w]=ans[i-1][w];
            }
        }
        display(ans,rows,cols);
    }
    return ans[n][cap];
}

int main(){
    int profit[] = {60,100,120};
    int weight[] = {10,20,30};
    int W = 50;
    int n = 3;
    cout<< knapsack(W,weight,profit,n);
}