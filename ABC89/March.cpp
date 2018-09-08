#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, c[5]={0};
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        
        switch(s[0]){
            case 'M':
                c[0]++;
                break;
            case 'A':
                c[1]++;
                break;
            case 'R':
                c[2]++;
                break;
            case 'C':
                c[3]++;
                break;
            case 'H':
                c[4]++;
                break;
        }
    }

//    for(int i=0; i<5; i++){
//       cout << "x" << c[i] << endl;
//  }

    long long int ans=0;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=j+1; k<5; k++){
                ans+=c[i]*c[j]*c[k];
            }
        }
    }

    cout << ans << endl;
    return 0;
}
