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
    bool is_unreadable = true;
    for(int i=0;i<l;++i){
        if(i%2==0){
            if(!islower(s[i])){
                is_unreadable = false;
            }
        }
        else{
            if(!isupper(s[i])){
                is_unreadable = false;
            }
        }
    }
    if(is_unreadable){
        cout << "Yes" << endl; 
    }
    else{
        cout << "No" << endl;
    }
    return 0;    
}