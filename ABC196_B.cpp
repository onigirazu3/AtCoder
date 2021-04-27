#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string x;
    cin >> x;
    string ans;
    for(char c:x){
        if(c == '.'){
            break; 
        }
        else{
            ans += c;
        }
    }
    cout << ans << endl;
    return 0;
}