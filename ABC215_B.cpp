#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll ans = 1;
    for(ll i=0;i<=60;i++){
        if(ans > n){
            cout << i - 1 << endl;
            break;
        }
        ans*=2;
    }
    return 0;
}