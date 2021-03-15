#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N,K,X,Y;
        cin >> N;
        cin >> K;
        cin >> X;
        cin >> Y;
        
        cout << K*X+(N-K)*Y << endl;
    return 0;
}