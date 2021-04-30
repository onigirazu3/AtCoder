#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    while(true){
        c -= b;
        a -= d;
        if(c <= 0){
            cout << "Yes" << endl;
            break;
        }
        else if(a <= 0){
            cout << "No" << endl;
            break;
        }
    }
    return 0;
}
    // if(c%b == 0){
    //     if(a/d+1 >= c/b)
    //     {
    //         cout << "Yes" << endl;
    //     }
    //     else{
    //         cout << "No" << endl;
    //     }
    // }
    // else{
    //     if(a/d >= c/b){
    //         cout << "Yes" << endl;
    //     }
    //     else{
    //         cout << "No" << endl;
    //     }
    // }