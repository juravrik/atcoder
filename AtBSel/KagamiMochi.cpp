#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d[n];
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    sort(d, d+n);
    int tmp=d[0], ans=n;
    for(int i=1; i<n; i++){
        if(d[i] == tmp){
            ans--;
        }
        tmp = d[i];
    }
    cout << ans << endl;
    return 0;
}
