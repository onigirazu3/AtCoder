#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    //最大ー最小を計算することでコストが最小と同義// 
    int ans = max({a,b,c})-min({a,b,c});
    cout << ans << endl;
    return 0;
}