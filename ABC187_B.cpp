#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int t=0;
    for(int i=0;i<n-1;i++)for(int j=i+1;j<n;j++){
        if(abs(x[j]-x[i]) >= abs(y[j]-y[i])){
            t++;
        }
    }
    cout << t << endl;
    return 0;
}