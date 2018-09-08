#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[m], b[m], c[n+1];
    for(int i=0; i<=n; i++){
        c[i]=0;
    }
    for(int i=0; i < m; i++){
        cin >> a[i] >> b[i];
        c[a[i]]++;
        c[b[i]]++;
    }

    for(int i=1; i<= n; i++){
        cout << c[i] << endl;
    }

    return 0;
}
