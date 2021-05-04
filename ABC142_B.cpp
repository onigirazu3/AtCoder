#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(h[i] >= k){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}