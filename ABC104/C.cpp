#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, g;
    cin >> d >> g;
    int p[d], c[d];
    for(int i=0; i<d; i++){
        cin >> p[i] >> c[i];
    }
    int ans=1000000000;
    for(int i=0; i<(1<<d); ++i){
        int s=0, ind=-1, num=0;
        for(int b=0; b<d; b++){
            if(i>>b&1){
                s += 100 * (b+1)*p[b]+c[b];
                num+=p[b];
            }else{
                ind = b;
            }
        }

        if(s < g){
            int need = (g-s+(100*(ind+1))-1)/(100*(ind+1));
            //int need = (g-s)/(100*(ind+1));
            if(need >= p[ind]){
                continue;
            }
            num+=need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;

    return 0;
}
