#include<bits/stdc++.h>
using namespace std;
void whoWon(int raghu, int sayan, int n, vector<int> dishes){
    sort(dishes.begin(),dishes.end());
    int sum = 0;
    for(int i:dishes){
        sum +=i;
        if(sum >=raghu ){
            cout<<"Sayan won"<<endl;
            return;
        }
        else if(sum >=sayan){
            cout<<"Raghu won"<<endl;
            return;
        }
        else if(sum >= raghu && sum >= sayan){
            cout<<"Tie"<<endl;
            return;
        }
    }
}
int main(){
    int raghu, sayan, n;
    cin>>raghu>>sayan>>n;
    vector<int>dishes;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        dishes.push_back(temp);
    }
    whoWon(raghu,sayan,n,dishes);
}