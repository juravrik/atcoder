#include <bits/stdc++.h>
using namespace std;

int main(){
    string t, sub[4] = {"maerd", "remaerd", "esare", "resare"};
    cin >> t;
    reverse(t.begin(), t.end());

    int i=0;
    while(i < t.size()){
        bool f=false;
        for(int j=0; j<4; j++){
            if(t.substr(i, sub[j].size()) == sub[j]){
                f=true;
                i+= sub[j].size();
                break;
            }
        }
        if(!f){
            break;
        }
    }

    if(i == t.size()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
