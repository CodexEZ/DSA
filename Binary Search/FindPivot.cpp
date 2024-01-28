#include<iostream>
using namespace std;
string sub(string s,int h, int l){
        string sum = "";
        for(int i=h;i<l;i++){
            sum = sum + s[i];
        }
        return sum;
    }
int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int k = 0;
        for(int i=0;i<n;i++){
            string str = sub(haystack,i,i+m-k);
            
            if(str == needle){
                return i;
            }
            k++;
        }
        return -1;
    }

int main(){
    cout<<strStr("sadbutsad","sad");
}