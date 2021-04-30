#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    string n;
    cin >> n;
    int ans= 0;
    for(int i=0;i<n.size();i++){
        ans += (n[i] - '0');
    }
    if(ans%9 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}