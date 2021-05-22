#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    ll m = 0;;
    ll u = 0;
    int c = 0;
    for(int i=0;i<n;i++){
        m += abs(x[i]); 
    }
    cout << m << endl;
    for(int i=0;i<n;i++){
        u += ll(x[i])*x[i];
    }
    printf("%.10f\n", sqrt(u));
    for(int i=0;i<n;i++){
        c = max(c,abs(x[i]));
    }
    cout << c << endl;
    return 0;
}