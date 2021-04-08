#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    ll d;
    cin >> n >> d;
    vector<ll> x(n),y(n);
    int a=0;
    for(int i=0;i<n;++i){
        cin >> x[i] >> y[i];
        ll len = x[i]*x[i] + y[i]*y[i];
        if(d*d >= len){
            ++a;
        }
    }
    cout << a << endl;
return 0;
}