#include<iostream>
#include <string>
using namespace std;

int main(){ 
    int a, s;
    cin >> s;

    a = (s/100)%10 + (s/10)%10 + s%10;

    cout << a << endl;
    return 0;
}
