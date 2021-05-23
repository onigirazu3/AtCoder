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
    int ans = n%1000;
    if(ans == 0){
        cout << 0 << endl;
    }
    else{
        cout << 1000-n%1000 << endl;
    }
    return 0;
}