#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int c500 = n/500;
    int m500 = n%500;
    int c5 = m500/5;
    int m5 = m500%5;
    cout << c500*1000 + c5*5 << endl;
    return 0;
}