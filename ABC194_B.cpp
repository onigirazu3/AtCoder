#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#define INF 1e9
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    int ans = INF;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            if(i != j){
                x = max(a[i],b[j]); 
            }
            else{
                x = a[i] + b[j];
            }
            if(x < ans){
                ans = x;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
    // int t = a[0];
    // int u = b[0];
    // int c=1,d=1;
    // for(int i=1;i<n;i++){
    //     t = min(t,a[i]);
    //     if(min(t,a[i])==a[i]){
    //         c = i;
    //     }
    // }
    // for(int i=1;i<n;i++){
    //     u = min(u,b[i]);
    //     if(min(u,b[i])==b[i]){
    //         d = i;
    //     }
    // }
    // if(c==d){
    //     cout << t + u << endl;
    // }
    // else{
    // cout << max(t,u) << endl;
    // }