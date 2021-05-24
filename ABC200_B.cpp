#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k;
    cin >> n >> k;
    ll ans = n;
    for(int i=0;i<k;i++){
        if(ans%200 == 0){
            ans = ans/200;
        }
        else{
            ans = ans*1000 + 200;
        }
    }
    cout << ans << endl;
    return 0;
}