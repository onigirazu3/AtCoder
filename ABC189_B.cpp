#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N,X;
    long long alc = 0;
    int s = 0;
    int d = 0;
    cin >> N >> X;
    vector<long long> V(N),P(N);
    for (int i=0;i<N;++i){
        cin >> V[i] >> P[i];
        alc += V[i]*P[i];
        ++s;
        if(alc>100*X){
            cout << s << endl;
            d = 1;
            break;
        }          
    }
    if(d==0){
        cout << "-1" << endl;
    }
    return 0;
}