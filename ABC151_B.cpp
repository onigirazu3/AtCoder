#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<int> a(n);
    for(int i=0;i<n-1;i++){
        cin >> a[i];
    }
    int ans = 0; 
    for(int i=0;i<n-1;i++){
        ans += a[i];
    }
    if(n*m - ans <= 0){
        cout << "0" << endl;
    }
    else if(n*m - ans > k){
        cout << "-1" << endl;
    } 
    else{
        cout << n*m - ans << endl;
    }
    return 0;
}