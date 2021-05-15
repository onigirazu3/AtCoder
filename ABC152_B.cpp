#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int a,b;
    cin >> a >> b;
    if(a <= b){
        for(int i=0;i<b;i++){
            cout << a;
        } 
    }
    else{
        for(int i=0;i<a;i++){
            cout << b;
        }
    }
    return 0;
}