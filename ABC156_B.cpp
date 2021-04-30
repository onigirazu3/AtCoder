#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    while(true){
        if(n>0){
            ans++;
        }
        else if(n == 0){
            break;
        }
        n = n/k;
    }
    cout << ans << endl;
    return 0;
}