#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x=0;
    if(a==b&&b!=c){
        x=1;
    }
    if(b==c&&c!=a){
        x=1;
    }
    if(c==a&&a!=b){
        x=1;
    }
    if(x==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}