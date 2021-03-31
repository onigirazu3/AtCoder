#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int L=S.length();
    
    if (S[L-1] == 's'){
        S+="es";
    }
    else {
        S+="s";
    }
    cout << S << endl;
    
return 0;
}