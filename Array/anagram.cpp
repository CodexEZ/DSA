#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Anagram(string s, string t){
    map<char,int> m,n;
    if(s.size()!=t.size()){
        return false;
    }
    for(int i = 0 ; i<s.size() ; i++){
        m[s[i]]++;
        n[t[i]]++;
    }
    for(auto i : m){
        if (m[i.first] != n[i.first]){
            return false;
        }
    }
    return true;

}

int main(){
    cout<<Anagram("tar","rata");
}