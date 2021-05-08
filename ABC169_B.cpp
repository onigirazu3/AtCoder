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
    for(int i=0;i<n;i++){
        if(a[i] == 0){
        cout << "0" << endl;
        return 0;
        }
    }
    ll ans = 1;
    for(int i=0;i<n;i++){
        if(ans <= 1000000000000000000ll/a[i]){
            ans *= a[i];
        }
        else{
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}