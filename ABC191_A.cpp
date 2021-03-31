#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int V,T,S,D;
    cin >> V >> T >> S >> D;
    if (D < V*T  || D > V*S){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
return 0;
}