#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
vector<int> tournament(vector<int> &a, vector<int> &b){
    vector<int> ans(b.size()/2);
    for(int i=0;i<(int)ans.size();i++){
        if(a[b[2*i]] > a[b[2*i + 1]]){
            ans[i] = b[2*i];
        }
        else{
            ans[i] = b[2*i + 1];
        }
    }
    return ans; 
}
int main(){
    int n;
    cin >> n;
    vector<int> a(1<<n);
    vector<int> b(1<<n);
    for(int i=0;i<(int)a.size();i++){
        cin >> a[i];
        b[i] = i;
    }
    for(int i=0;i<n-1;i++){
        b = tournament(a,b);
    }
    if(a[b[0]] > a[b[1]]){
        cout << b[1] + 1 << endl;
    }
    else{
        cout << b[0] + 1 << endl;
    }
    return 0;
}