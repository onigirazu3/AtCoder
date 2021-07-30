#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n,k;
    cin >> n >> k;
    for(int i=0;i<k;i++){
        string g1,g2;
        g1 = g2 = to_string(n);
        //g1 = to_string(n);
        sort(g1.begin(),g1.end(),greater<char>());
        //g2 = to_string(n);
        sort(g2.begin(),g2.end());
        n = stoll(g1) - stoll(g2);
    }
    cout << n << endl;
    return 0;
}