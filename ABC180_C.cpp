#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    vector<ll> ans;
    for(ll i=1;i*i<=n;i++){
        if(n % i == 0){
            ans.push_back(i);
            if(i != n/i){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}