#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int r,d,x;
    cin >> r >> d >> x;
    int ans = x;
    for(int i=1;i<=10;i++){
        ans = ans*r - d;
        cout << ans << endl;
        
    }
    return 0;
}