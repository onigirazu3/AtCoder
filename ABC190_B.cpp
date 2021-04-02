#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N,S,D;
    cin >> N >> S >> D;
    vector<int> X(N),Y(N);
    for (int i=0;i<N;++i){
        cin >> X[i] >> Y[i];
        if(X[i] < S && Y[i] > D){
            puts("Yes");
            return 0;     
        }    
    }
    puts("No");
    return 0;
}