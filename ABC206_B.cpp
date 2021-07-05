#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;
    while(sum + i <= n){
        sum += i;
        i++; 
    }
    if(sum == n){
        cout << i-1 << endl;
    }
    else{
        cout << i << endl;
    }
    return 0;    
}