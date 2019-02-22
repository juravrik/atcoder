#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int t[4];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> t[i];
    }

    int ans=1e9;
    for(int i=0; i < (1 << n); i++){
        int taka=0, frend=0;
        for(int bit=0; bit < n; bit++){
            if(i>>bit&1){
                taka+=t[bit];
            }else{
                frend+=t[bit];
            }
        }
        ans = min(ans, max(frend, taka));
    }
    cout << ans << endl;

    return 0;
}
