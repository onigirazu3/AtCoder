#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int a;
    cin >> a;
    int ans = a + a*a + a*a*a; 
    cout << ans << endl;
    return 0;
}