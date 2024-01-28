#include<bits/stdc++.h>
using namespace std;

long long fibonacci(int n, map<long,long> &memo){
    if(n<=1)
        return n;
    else if(memo.find(n) != memo.end())
        return memo[n];
    else {
        memo[n] = fibonacci(n-1,memo)+fibonacci(n-2,memo);
        return memo[n];
    }

}
int main(){
    //Write code here
    map<long,long> memo;
    
    cout<<fibonacci(30,memo);
}