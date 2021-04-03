#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    long long yearA = 0;
    long long A = 100;
    while (A<X){
        A += A/100;
        yearA++;
    }
    /*for(long long A = 100;A<X;A+=A/100){
        yearA++;
    }*/     
    cout << yearA << endl;
return 0;
}