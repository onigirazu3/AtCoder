#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,h;
        cin >> a;
        cin >> b;
        cin >> h;
        if(h%2 == 0){
        cout << (a+b)*h/2 << endl;
        }
    return 0;
}