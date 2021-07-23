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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<int> b(n);
    for(int i=1;i<=n;i++){
        b[i-1] = i;
    }
    if(a == b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;  
}