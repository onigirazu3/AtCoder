#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int min = 0;
    int max = 10000;
    for(int i=0;i<n;i++){
        if(a[i] > min){
            min = a[i];
        }
        if(max > b[i]){
            max = b[i];
        }
    }
    int ans = max - min +1;
    if(ans > 0){
        cout << ans << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}