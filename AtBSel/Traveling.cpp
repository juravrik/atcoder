#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool can = true;
    cin >> n;
    int t[n+1], x[n+1], y[n+1];

    t[0] = x[0] = y[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> t[i] >> x[i] >> y[i];
   }

    for(int i=1; i<=n; i++){
        int dt = t[i]-t[i-1];
        int dist = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);

        if(dt < dist){
            can = false;
            break;
        }
        if(dt%2 != dist%2){
            can = false;
        }
    }

    if(can){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
