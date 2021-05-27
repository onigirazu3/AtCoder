#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    double a,b;
    cin >> a >> b;
    double ans;
    ans = 100*(1 - b/a);
    cout << ans << endl;
    return 0;
}