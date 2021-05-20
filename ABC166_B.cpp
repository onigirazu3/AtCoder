#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k;
    cin >> n >> k;
    int d;
    vector<vector<int>> a(k);
    for(int i=0;i<k;i++){
        cin >> d;
        a[i].resize(d);
        for(int j=0;j<d;j++){
            cin >> a[i][j];
        }
    }
    vector<int> s(n,0);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            s[a[i][j]-1]++;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;

}