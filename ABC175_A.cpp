#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool p = s[0] == 'R';
    bool q = s[1] == 'R';
    bool r = s[2] == 'R';
    if(p && q && r){
        cout << "3" << endl;
    }
    else if(p && q||q && r){
        cout << "2" << endl;
    }
    else if(p || q || r){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
return 0;
}