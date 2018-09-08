#include<iostream>
#include<cmath>
using namespace std;

int main(void){
    long long a, b, c, k;

    cin >> a >> b >> c >> k;

    /*for(int i=0; i<k; i++){
        ap = b+c;
        bp = a+c;
        cp = a+b;
        a = ap;
        b = bp;
        c = cp;
    }*/




    if(k%2 == 1){
        cout << b-a << endl;
    }else{
        cout << a-b << endl;
    }
    
    return 0;
}
