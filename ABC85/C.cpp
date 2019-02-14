#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, y;
    cin >> n >> y;
    for(int b10=0; b10*10000 <= y; b10++){
        for(int b5=0; (b10*10000+b5*5000) <= y; b5++){
            if((b10+b5+(y-b10*10000+b5*5000)/1000) == n){
                cout << b10 << " " << b5 << " " << (y-b10*10000+b5*5000)/1000 << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    
    return 0;
}
