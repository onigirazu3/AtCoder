#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> d1(n),d2(n);
    for(int i=0;i<n;++i){
        cin >> d1[i] >> d2[i];
    }
    int total = 0;
    for(int i=0;i<n-2;++i){
        if(d1[i]==d2[i] && d1[i+1]==d2[i+1] && d1[i+2]==d2[i+2]){
            total = 1;
        }
    }
    if(total==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}