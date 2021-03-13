#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,ans="";
    cin >> a;
    for(int i=0; i<a.size(); i+=2){
        ans+=a[i];
    }

    cout << ans << endl;
    return 0;
}