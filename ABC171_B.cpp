#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k;
    cin >> n >> k;
    int p[1100];
    int ans = 0;
    for(int i=0;i<n;++i){
        cin >> p[i];
    }
    sort(p,p+n);
    for(int i=0;i<k;++i){
        ans += p[i];
    }
    cout << ans << endl;
}