#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int h,n;
    cin >> h >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        h -= a[i];
        if(h <= 0){
            cout << "Yes" << endl;
            break;
        }
    }
    if(h > 0){
        cout << "No" << endl;
    }
    return 0;
}