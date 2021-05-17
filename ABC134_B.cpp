#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,d;
    cin >> n >> d;
    cout << (n + d*2)/(d*2 + 1) << endl;
}