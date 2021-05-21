#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int k,x;
    cin >> k >> x;
    for(int i=x-k+1;i<x+k;i++){
        cout << i << " ";
    }
    return 0;
}