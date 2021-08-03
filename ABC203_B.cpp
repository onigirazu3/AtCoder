#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k;
    cin >> n >> k;
    cout << n*(n+1)*k*50 + k*(k+1)*n/2 << endl;
    return 0;
}