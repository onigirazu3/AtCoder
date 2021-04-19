#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    int s=0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        s += a[i];
    }
    int t=0;
    for(int i=0;i<n;++i){
        if(4*m*a[i] >= s){
            t++;
        }
    }
    if(t >= m){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}