#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int h,w;
    cin >> h >> w;
    int a[110][110];
    for(int i=0;i<h;i++)for(int j=0;j<w;j++){
        cin >> a[i][j];
    }
    int m = 1e9;
    for(int i=0;i<h;i++)for(int j=0;j<w;j++){ 
        if(m > a[i][j]){
            m = a[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<h;i++)for(int j=0;j<w;j++){
        ans += a[i][j] - m;
    }
    cout << ans << endl;
    return 0;
}