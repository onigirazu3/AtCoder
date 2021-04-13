#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;++i){
        cin >> a[i] >> b[i];
    }
    ll total=0;
    for(int i=0;i<n;++i){
        total += b[i]*(b[i]+1)/2 - a[i]*(a[i]-1)/2;
    }
    cout << total << endl;
}