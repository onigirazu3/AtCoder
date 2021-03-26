#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //整数aを定義//
    int a;
    //整数aを入力//
    cin >> a;
    //約数が8個ある個数を定義//
    int ans = 0;
    //奇数cを定義して約数xを吟味し、約数の個数numが8のとき答えに追加する//
    for (int c=1;c<=a;c+=2){
        int num = 0;
        for (int x=1;x<=c;++x){
            if (c%x==0){
                ++num;
            } 
        }
        if(num==8){
            ++ans;
        }
    }
    //約数が8個の奇数の数を出力//
    cout << ans << endl;
    return 0;
}