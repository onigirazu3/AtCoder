#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int K,A,B;
    cin >> K;
    cin >> A >> B;
    int i=(B/K)*K;
    if(A<=i){
        cout << "OK" << endl;
    }
    else{
        cout << "NG" << endl;
    }
return 0;
}