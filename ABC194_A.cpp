#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int A=0,B=0;
    cin >> A >> B;
    if (A+B >= 15 && B >= 8){
        cout << "1" << endl;
    }
    else if (A+B >= 10 && B >= 3){
        cout << "2" << endl;
    }
    else if (A+B >= 3){
        cout << "3" << endl;
    }
    else{
        cout << "4" << endl;
    }    
return 0;
}