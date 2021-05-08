#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    set<ll> st;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        st.insert(a);
    }
    if(st.size() == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}