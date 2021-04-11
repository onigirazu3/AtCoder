#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    int acn=0,wan=0,tlen=0,ren=0;
    for(int i=0;i<n;++i){
        cin >> s[i];
        if(s[i] == "AC"){
            ++acn;
        }
        else if(s[i] == "WA"){
            ++wan;
        }
        else if(s[i] == "TLE"){
            ++tlen;
        }
        else{
            ++ren;
        }
    }
    cout << "AC x "<< acn << endl;
    cout << "WA x "<< wan << endl;
    cout << "TLE x "<< tlen << endl;
    cout << "RE x "<< ren << endl;
    return 0;
}