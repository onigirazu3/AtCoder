#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    for(int i=0;i<n;i++){
        cout << s[i] << t[i];
    }
    return 0;
}