#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int N,m,t;
    cin >> N >> m >> t;
    vector<ll> A(m),B(m);
    for(int i=0;i<m;++i){
        cin >> A[i] >> B[i];
    }
    int c=0;
    int bat=N;
    int a=1;
    for(int i=0;i<m;++i){
        bat -= A[i] - c;
        if(bat<=0){
            a=0;
            break;
        }
        else{
            c = A[i];
            bat += B[i] - c;
            bat = min(bat,N);
            c = B[i];
        }
    }
    bat -= t - c;
    if(bat<=0){
        a=0;
    }     
    if(a==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}