#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string n;
    cin >> n;
    string s = n;
    reverse(s.begin(),s.end());
    for(int i=0;i<10;i++){
        if(n == s){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            n = '0' + n;
            s += '0';
        }
    }
    cout << "No" << endl;
    return 0;
}