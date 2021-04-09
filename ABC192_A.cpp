#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int x;
    cin >> x;
    int ans;
    ans = 100 - (x%100);
    cout << ans << endl;
    return 0;
}