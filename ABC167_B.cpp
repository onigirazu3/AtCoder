#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    if(a + b >= k){
        if(a >= k){
            cout << k << endl;
        }
        else{
            cout << a << endl;
        }
    }
    else{
        cout << 2*a+b-k << endl;
    }
    return 0;
}