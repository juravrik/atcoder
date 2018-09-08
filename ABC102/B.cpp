#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int min=1000000001, max=0;
    
    for(int i=0; i<n; i++){
        int t;
        cin >> t;

        if(t > max){
            max=t;
        }
        if(min > t){
            min=t;
        }
    }
    cout << max - min << endl;
    return 0;
}
