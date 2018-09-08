#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int l0=2, l1=1;
    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        long long int t=l1;
        l1 = l1+l0;
        l0=t;
    }

    cout << l1 << endl;
    
    return 0;
}
