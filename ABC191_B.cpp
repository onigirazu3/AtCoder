#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    int x;
    cin >> n >> x;
    vector<int> a(n),ans;
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    for(int i=0;i<n;++i){
        if(a[i] != x){
            ans.push_back(a[i]);
        }
    }
    if(ans.size()==0){
        return 0;
    }
    for(int i=0;i<ans.size()-1;++i){
        cout << ans[i] << " ";
    }
    cout << ans[ans.size()-1] << endl;
    return 0;   
}