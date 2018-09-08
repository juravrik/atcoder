#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k;
    int a[3];

    cin >> a[0] >> a[1] >> a[2];
    cin >> k;

    sort(a, a+3);

    for(int i=0; i < k; i++){
        a[2] *= 2;
    }
    cout << a[0]+a[1]+a[2] <<endl;
}
