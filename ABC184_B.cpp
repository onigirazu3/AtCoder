#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int N=0,X=0;
    string S;
    cin >> N >> X;
    cin >> S;
    for(int i=0;i<N;i++){
        if(S[i] =='o'){
            ++X;
        }
        else{
            X = max(0,X-1);
        }
    }
    cout << X << endl;
return 0;
}