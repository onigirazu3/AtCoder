#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int p;
    cin >> p;
    vector<int> a(10);
    a[0] = 1;
    for(int i=1;i<10;i++){
        a[i] = a[i-1]*(i+1); 
    }
    int ans = 0;
    for(int i=9;i>=0;i--){
        if(p >= a[i]){
            ans += p/a[i];
            p %= a[i];
        }
    }
    cout << ans << endl;
    return 0;
}