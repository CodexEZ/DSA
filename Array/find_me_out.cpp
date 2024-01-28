#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(long long i=n+n;;i = i+n){
        long long x = i, sum = 0;
        while(x>0){
            int d = x%10;
            sum +=d;
            x = x/10;
        }
        if(sum == n){
            cout<<i;
            break;
        }
    }
}