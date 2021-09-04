#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    vector<string> s(4);
    for(int i=0;i<=3;i++){
        cin >> s[i];
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            if(i!=j && s[i] == s[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}