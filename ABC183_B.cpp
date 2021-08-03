#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    double Sx,Sy,Gx,Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double ans;
    ans = Sx + (Gx - Sx)/(Gy + Sy)*Sy;
    printf("%.10f\n",ans);
    return 0;
}