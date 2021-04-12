#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int x,y;
    cin >> x >> y;
    int ans = 0;
    if(x>y){
        if(x<y+3){
            ans = 1;
        }
        else{
            ans = 0;
        }
    }
    else{
        if(x+3>y){
            ans = 1;
        }
        else{
            ans = 0;
        }
    }
    if(ans==1){
        cout << "Yes" << endl; 
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}