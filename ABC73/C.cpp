#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    map<int, int> mp;

    cin >> n;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(mp.find(a) != mp.end() && mp[a] ==1){
            mp[a]=0;
//            cout << i << ":0:" << a << endl;
        }else{
            mp[a]=1;
//            cout << i << ":1:" << a << endl;
        }
    }

    int ans=0;
    for(auto itr=mp.begin(); itr != mp.end(); ++itr){
        ans+=itr->second;
    }
    cout << ans << endl;



    return 0;
}
