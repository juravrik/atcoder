#include<iostream>
using namespace std;

int main(void){
    int k, s, c=0;
    cin >> k >> s;

    for(int x=0; x<=k; x++){
        for(int y=0; y<=k; y++){
            int z = s-x-y;
            if(z <= k && z >= 0){
                c++;
            }
        }
    }

    cout << c << endl;
    return 0;
}
