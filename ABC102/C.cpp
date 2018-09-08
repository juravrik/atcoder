#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int a[n];
    long long int t[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        t[i] = a[i] - i - 1;
    }
    
    sort(t, t+n);
    int b=t[n/2];


    long long int ans=0;
    for(int i=0; i<n; i++){
        ans += abs(a[i] -(b+i+1));
    }
    cout << ans << endl;
   return 0;
}
