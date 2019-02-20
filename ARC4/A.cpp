#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i=0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    double max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            float temp = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if(max <= temp){
                max = temp;
            }
        }
    } 
    cout << max << endl;
    return 0;
}
