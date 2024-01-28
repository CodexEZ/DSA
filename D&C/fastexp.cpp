#include<bits/stdc++.h>
using namespace std;

int power(int base, int exponent){
    if(exponent==0){
        return 1;
    }
    int halfexp = exponent/2;
    int halfpower = power(base, halfexp);
    int result = halfpower*halfpower;
    if(exponent%2==1){
        result*=base;
    }
    return result;
}
int main(){
    cout<<power(2,2);
}