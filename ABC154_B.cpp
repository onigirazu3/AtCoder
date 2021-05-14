#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        s[i] = 'x';
    }
    cout << s << endl;
    return 0;
}