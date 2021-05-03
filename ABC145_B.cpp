#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    string s;;
    cin >> n;
    cin >> s; 
    if(n%2 != 0){
        cout << "No" << endl;
    }
    else{
        string t1 = s.substr(0,n/2);
        string t2 = s.substr(n/2,n/2);
        if(t1 == t2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}