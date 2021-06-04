#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<string> s(h+2,string(w+2,'#'));
    for(int i=1;i<=h;++i){
        string a;
        cin >> a;
        s[i] = "#" + a + "#";
    }
    int ans = 0;
    for(int i=x;i>=1;i--){
        //i>=1 --> s[i][y] != '#'
        //l.20~25 --> ans++;
        if(s[i][y] != '#'){
            ans++;
        }
        else{
            break;
        }
    }
    for(int i=x;i<=h;i++){
        if(s[i][y] != '#'){
            ans++;
        }
        else{
            break;
        }
    }
    for(int i=y;i>=1;i--){
        if(s[x][i] != '#'){
            ans++;
        }
        else{
            break;
        }
    }
    for(int i=y;i<=w;i++){
        if(s[x][i] != '#'){
            ans++;
        }
        else{
            break;
        }
    }
    cout << ans - 3 << endl;
    return 0;
}