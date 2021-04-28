#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int best = -1,ans = -1;
    for(int k=2;k<=1000;k++){
        int gcd = 0;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                gcd++;
            }
        }
        if(best < gcd){
        best = gcd;
        ans = k;
        }
    }
    cout << ans << endl;
    return 0;
}