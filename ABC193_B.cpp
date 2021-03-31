#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N;
    int ans=1e9+1;
    cin >> N;
    vector<int> A(N),P(N),X(N);
    for (int i=0;i<N;++i){
        cin >> A[i] >> P[i] >> X[i];
        if(X[i] - A[i] > 0){
            ans = min({P[i],ans});
        }     
    }
    if (ans==1e9+1){
        cout << "-1" << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}