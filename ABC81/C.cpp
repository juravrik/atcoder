#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int n,k,a, ans = 0;
    vector<int> lst;
    
    cin >> n >> k;

    for(int i = 0; i <= n; i++){
        lst.push_back(0);
    }

    for(int i = 1; i <= n; i++){
        cin >> a;
        lst[a]++;
    }     

    sort(lst.begin(),lst.end());

    

    int i = 0;
    for(i = 1; n - i >= k; i++){
        if(lst[i] == 0){
            continue;
        }
        ans += lst[i];        
    }
    
    cout << ans << endl;
    return 0;
}
