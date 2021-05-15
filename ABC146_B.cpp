#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i=0;i<s.length();i++){
        int x = s[i] -'A';
        x = (x + n)%26;
        cout << char('A' + x);
    }
    return 0;
}