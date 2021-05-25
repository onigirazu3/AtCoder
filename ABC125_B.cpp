#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> c(n),v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v[i] > c[i]){
            ans += v[i] -c[i];
        }
    }
    cout << ans << endl;
    return 0;
}