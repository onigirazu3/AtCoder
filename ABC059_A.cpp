#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
    cin >> a >> b >> c;

    cout << (char)(a[0]-32) << (char)(b[0]-32) << (char)(c[0]-32)<< endl;
    return 0;
}