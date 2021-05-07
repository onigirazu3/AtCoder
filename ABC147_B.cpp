#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    int l = s.length();
    int ans = 0;
    if(l%2 == 0){
        for(int i=0;i<l/2;i++){
            if(s[i] != s[l-1-i]){
                ans++;
            }
        }
    }
    else{
        for(int i=0;i<(l-1)/2;i++){
            if(s[i] != s[l-1-i]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}