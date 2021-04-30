#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int k;
    string s;
    cin >> k >> s;
    if(s.size()>k){
        for(int i=0;i<k;i++){
            cout << s[i];
        }
        // s.substr(0,k) -> 0~k文字まで表示
        cout << "..." << endl;
    }
    else{
        cout << s << endl;
    }
    return 0;
}