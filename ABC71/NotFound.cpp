#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count[26] = {0};
    for(char i : s){
        count[(int)(i - 'a')]++;
    }

    for(int i=0; i < 26; i++){
        if(count[i]==0){
            cout << (char)('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
