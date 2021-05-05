#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum += d[i]*d[j];
        }
    }
    cout << sum << endl;
    return 0;
}