#include<iostream>
#include<string>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c == 'a' or c == 'e' || c == 'i' or c == 'o' or c == 'u'){
        cout << "vowel" << endl;
    }
     
    else{
        cout << "consonant" << endl;;
    }
    return 0;
}