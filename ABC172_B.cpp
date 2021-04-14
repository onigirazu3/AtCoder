#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string s,t;
    cin >> s;
    cin >> t;
    int ans=0;
    for(int i=0;i<s.length();++i){
        if(s[i]!=t[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}