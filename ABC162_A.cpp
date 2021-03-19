#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[4];
    cin >> a; 
    if(a[0] == '7' || a[1] == '7' || a[2] == '7'){
        cout << "Yes" << endl;
    } 
    else{
        cout << "No" << endl;
    }    

    return 0;
}