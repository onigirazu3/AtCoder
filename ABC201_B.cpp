#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<pair<int,string>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].second >> a[i].first;
    }
    sort(a.begin(),a.end());    
    cout << a[n-2].second << endl;
    return 0;
}