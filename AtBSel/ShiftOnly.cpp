#include <bits/stdc++.h>
using namespace std;

bool check(int *a, int n){
    for(int i=0; i < n; i++){
        if(a[i]%2==1){
            return false;
        }
    }
    return true;
}

int main(){
    int n, sum=0;
    cin >> n;
    int a[n];
    
    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    while(check(a, n)){
        sum++;
        for(int i=0; i<n; i++){
            a[i] /= 2;
        }
    }
    cout << sum << endl;
    return 0;
}
