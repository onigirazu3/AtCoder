#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    if(a >= k){
        cout << a - k << " " << b << endl;
    }
    else if(a + b >= k){
        cout << 0 << " " << a + b - k << endl;
    }
    else{
        cout << 0 << " " << 0 << endl;
    }
    return 0;
}