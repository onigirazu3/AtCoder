#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    char a[10];
    cin >> a;
    if (a[0] == a[1] && a[1]!= a[2] && a[2] == a[3]){
        cout << "Yes" << endl;
    }
    else if (a[0] == a[2] && a[2]!= a[1] && a[1] == a[3]){
    cout << "Yes" << endl;
    }
    else if (a[0] == a[3] && a[3]!= a[1] && a[1] == a[2]){
    cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}