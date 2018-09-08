#include <bits/stdc++.h>
using namespace std;


int main(){
    int w, h, n;
    cin >> w >> h >> n;
    int x[n], y[n], a[n];
    int square[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            square[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i] >> a[i];
    }


    for(int i=0; i<n; i++){
        switch(a[i]){
            case 1:
                for(int j=0; j<x[i]; j++){
                    for(int k=0; k<w; k++){
                        square[j][k] = 1;
                    }
                }
                break;
            case 2:
                for(int j=h-1; j>x[i]; j--){
                    for(int k=0; k<w; k++){
                        square[j][k] = 1;
                    }
                }
                break;
            case 3:
                for(int j=0; j<h; j++){
                    for(int k=0; k<y[i]; k++){
                        square[j][k] = 1;
                    }
                }
                break;
            case 4:
                for(int j=0; j<h; j++){
                    for(int k=w-1; k>y[i]; k--){
                        square[j][k] = 1;
                    }
                }
                break;
        }
    }

    int count=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(square[i][j] ==1){
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
