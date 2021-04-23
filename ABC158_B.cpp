#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    ll t = a+b;
    ll ans = a*(n/t);
    ans += min(n%t,a);
    cout << ans << endl;
    return 0;
}