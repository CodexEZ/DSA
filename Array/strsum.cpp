#include<bits/stdc++.h>
using namespace std;

int sum(string s, unordered_map<char,int>&value){
    int sum = 0;
    for(char i  : s){
        sum += value[i];
    }
    return sum;
}
int main(){
    unordered_map<char, int> value;
    value['A'] = 1;
    value['B'] = 10;
    value['C'] = 100;
    value['D'] = 1000;
    value['E'] = 10000;
    value['F'] = 100000;
    value['G'] = 1000000;

    string s;
    cin>>s;
    cout<<sum(s,value);

    
}