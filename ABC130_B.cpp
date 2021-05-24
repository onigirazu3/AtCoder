#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int d = 0;
    int ans = 1;
    for(int i=0;i<n;i++){
        d += l[i];
        if(d > x){
            break;
        }
        else{
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}