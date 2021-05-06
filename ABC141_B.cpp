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
        if(i%2 == 0){
            if(s[i] == 'L'){
                cout << "No" << endl;
                return 0;
            }
        }
        else{
            if(s[i] == 'R'){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}