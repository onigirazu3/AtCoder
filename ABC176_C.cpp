#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll l = 0;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(a[i] < l){
            ans += l-a[i];
        }
        l = max(a[i],l);
    }
    cout << ans << endl;
    return 0;
}
