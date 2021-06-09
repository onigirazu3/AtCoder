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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i] > 10){
            ans += a[i] - 10;
        }
    }
    cout << ans << endl;
    return 0;
}