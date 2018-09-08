#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count[101] = {0};

    cin >> n;
    
    int d[n];

    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    for(int i=0; i<n; i++){
        count[d[i]]++;
    }
    
    int ans=0;
    for(int i=1; i<=100; i++){
        if(count[i] > 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
