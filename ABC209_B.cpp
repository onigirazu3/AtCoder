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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(i%2 != 0){
            sum += a[i] - 1;
        }
        else{
            sum += a[i];
        }
    }
    if(x >= sum){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}