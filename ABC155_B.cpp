#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int list = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2 == 0 && a[i]%3 != 0 && a[i]%5 != 0){
            cout << "DENIED" << endl;
            return 0;
        }
    }
    cout << "APPROVED" << endl;
    return 0;
}