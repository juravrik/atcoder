#include<iostream>
#include <vector>
#include <list> 
using namespace std;

int main(){ 
    int n, a, f = 0;
    vector<int> lst;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        lst.push_back(a);
    }
    int i;
    for(i = 0; ; i++){
        for(int j = 0; j < n; j++){
            if(lst[j]%2 == 1){
                f = 1;
                break;
            }
            lst[j] = lst[j]/2;
        }
        if(f != 0){
            break;
        }
    }

    cout << i << endl;
    return 0;
}
