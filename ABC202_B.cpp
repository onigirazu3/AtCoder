#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '6'){
            s[i] = '9';
        }
        else if(s[i] == '9'){
            s[i] = '6';
        }
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    //for(int i=0;i<s.size();i++){
    //    cout << s[s.size()-1-i];
    //}
    return 0;
}