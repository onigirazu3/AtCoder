#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    vector<vector<int>> a(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    cin >> n;
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> b[i]; 
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<n;k++){
                if(a[i][j] == b[k]){
                    a[i][j] = 0;
                }
            }
        }
    }
    int ans = 1;
    for(int i=0;i<3;i++){
        if(a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0){
            ans = 0;
            break; 
        }
        else if(a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0){
            ans = 0;
            break;
        }
    }
    if(a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0){
        ans = 0;
    }
    else if(a[2][0] == 0 && a[1][1] == 0 && a[0][2] == 0){
        ans = 0;
    }
    if(ans == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    //6行分の表記（三項演算子）
    //cout << (ans ? "No":"Yes") << endl;
    return 0;
}