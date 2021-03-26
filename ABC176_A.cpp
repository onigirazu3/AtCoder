#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int N,X,T;
    cin >> N >> X >> T;
    int ans;
    if (N%X == 0){
        cout << T*(N/X) << endl;
    }
    else{
        cout << T*((N/X)+1) << endl;
    }
return 0;
}