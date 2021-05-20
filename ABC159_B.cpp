#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    int ok = true;
    for(int i=0;i<(s.size())/2;i++){
        if(s[i] != s[(s.size())/2-1-i]){
            ok = false;
            break;
        }
    }
    if(s.substr(0,s.size()/2) != s.substr(s.size()/2+1,s.size()/2)){
        ok = false;
    }
    if(ok){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}