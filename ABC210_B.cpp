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
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            ans = i;
            break;
        }
    }
    if(ans % 2 != 0){
        cout << "Aoki" << endl;
    }
    else{
        cout << "Takahashi" << endl;
    }
    return 0;

}