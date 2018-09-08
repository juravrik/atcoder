#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int x, y;
    cin >> x >> y;


    cout << floor(log2((long double)(y)/(long double)(x))+1.0) << endl;


    return 0;
}
