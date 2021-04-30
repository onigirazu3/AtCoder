#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string s,t;
    cin >> s >> t;
    int m = 10000;
    for(int i=0;i<=s.size()-t.size();i++){
        int d=0;
        for(int j=0;j<t.size();j++){
            if(s[i+j] != t[j]){
                d++;
            }
        }
        if(d<m){
            m = d;
        }
    }
    cout << m << endl;
    return 0;
}