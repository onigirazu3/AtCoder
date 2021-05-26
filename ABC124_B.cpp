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
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    int x = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        x = max(x,h[i]);
        if(x == h[i]){
            ans++;
        } 
    }
    cout << ans << endl;
    return 0;
}