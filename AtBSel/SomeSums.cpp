#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, count=0, sum;

    cin >> n >> a >> b; 

    for(int i=1; i<=n; i++){
        int tmp=i;
        sum=0;
        while(tmp>0){
            sum+=(tmp%10);
            tmp/=10;
        }
        if(sum>=a && sum<=b){
            count+=i;
        }
    }

    cout << count << endl;
    return 0;
}
