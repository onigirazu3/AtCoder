#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        ans += a[i];
    }
    if(n >= ans){
        cout << n-ans <<endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}