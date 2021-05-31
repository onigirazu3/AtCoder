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
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}