#include <bits/stdc++.h>
using namespace std;

int main(){
    int inp[3], s1, s2, d1;
    
    cin >> inp[0] >> inp[1] >> inp[2];

    sort(inp, inp+3);
    
    if(inp[0]%2==inp[1]%2 && inp[0]%2 == inp[2]%2){
        cout << (inp[2] - inp[0]) / 2 + (inp[2] - inp[1]) / 2<< endl;
    }else if(inp[0]%2==inp[1]%2 && inp[0]%2 != inp[2]%2){
        cout << (inp[1] - inp[0]) / 2 + (inp[2] - inp[1])<< endl;
    }else{
        cout << (inp[2] - inp[1])  + (inp[1] - inp[0] + 1) / 2 + 1<< endl;
    }





    return 0;
}
