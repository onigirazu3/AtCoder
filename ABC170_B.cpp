#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int x,y;
    cin >> x >> y;
    int a,b;
    if((4*x-y)%2!=0){
        cout << "No" << endl;
    }
    else{
        a = (4*x-y)/2;
        b = (y-2*x)/2;
        if(a>=0 && b>=0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}