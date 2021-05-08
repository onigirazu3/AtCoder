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
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    set<string> a;
    for(int i=0;i<n;i++){
        a.insert(s[i]);
    }
    cout << a.size() << endl;
    return 0;
}