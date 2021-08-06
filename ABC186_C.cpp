#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
bool seven(int n /*, int k*/){
    string s = to_string(n);
    if(s.size() > s.find("7")){
        return true;
    }
    while(n != 0){
        if(n%8 == 7 /*n%k == 7(k進法に存在する7の評価)*/){
            return true;
        }
        else{
            n /= 8;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(not seven(i)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}