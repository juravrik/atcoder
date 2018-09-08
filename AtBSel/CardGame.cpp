#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int Alice=0;
    for(int i=n-1; i>=0; i-=2){
        Alice+=a[i];
    }
    
    int Bob=0;
    for(int i=n-2; i>=0; i-=2){
        Bob+=a[i];
    }

    cout << Alice-Bob <<endl;

    return 0;
}
