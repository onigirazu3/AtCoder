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
    vector<double> a(n);
    double ans;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int c = 1;
    for(int i=0;i<n;i++){
        c *= a[i];
    }
    double u = 1;
    double l = 0; 
    for(int i=0;i<n;i++){
        l += 1.0/a[i];
    }
    ans = u/l;
    printf("%.10f\n",ans);
    return 0;
}