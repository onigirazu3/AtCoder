#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                vector<int> a = {l[i],l[j],l[k]};
                sort(a.begin(),a.end());
                if(a[0] != a[1] && a[1] != a[2] && a[0] + a[1] > a[2]){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}