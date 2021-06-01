#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int a,b;
    cin >> a >> b;
    int ans = 0;
    if((b-1)%(a-1) == 0){
        ans = (b-1)/(a-1);
    }
    else{
        ans = (b-1)/(a-1) + 1;
    }
    cout << ans << endl;
    return 0;
}