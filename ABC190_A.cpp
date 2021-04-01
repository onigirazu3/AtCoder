#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    if(A+C>B){
        cout << "Takahashi" << endl;
    }
    else{
        cout << "Aoki" << endl;
    }
return 0;
}