#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b >= c*d){
        cout << "-1" << endl;
    }
    else{
        if(a%(c*d - b) != 0){
            cout << a/(c*d - b) + 1 << endl; 
        }
        else{
            cout << a/(c*d - b) << endl;
        }
    }
    return 0;
}