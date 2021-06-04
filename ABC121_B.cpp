#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int num = 0;
    for(int i=0;i<n;i++){
        int ans = c;
        for(int j=0;j<m;j++){
            ans += a[i][j]*b[j];
        }
        if(ans > 0){
            num++;
        }
    }
    cout << num << endl;
    return 0;
}