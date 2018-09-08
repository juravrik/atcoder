#include<iostream>
#include<cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int a1 = n %10;
    int a2 = (n/10)%10;
    int a3 = (n/100)%10;
    int a4 = (n/1000)%10;

    if((a3 == a2 && a2 == a1) || (a2 == a3 && a3 == a4)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
