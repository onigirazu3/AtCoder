#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(c % 2 == 0){
        if(abs(a) > abs(b)){
            cout << ">" << endl;
        }
        else if(abs(a) == abs(b)){
            cout << "=" << endl;
        }
        else{
            cout << "<" << endl;
        }
    }
    else{
        if(a > b){
            cout << ">" << endl;
        }
        else if(a == b){
            cout << "=" << endl;
        }
        else{
            cout << "<" << endl;
        }
    }
    return 0;
}