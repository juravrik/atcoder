#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x[n], y[n], h[n];
    int nz=-1;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i] >> h[i];
        if(nz==-1 && h[i]!=0){
            nz=i;
        }
    }
    
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            int ht = h[nz]+ abs(x[nz] - i) + abs(y[nz] - j);
            bool flag=true;
            for(int k=0; k<n; k++){
                if(max(ht-abs(x[k]-i)-abs(y[k]-j), 0) != h[k]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << i << " " << j << " " << ht << endl;
                return 0;
            }
        }
    }
                
    return 0;
}
