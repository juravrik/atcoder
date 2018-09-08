#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;

    cin >> h >> w;
    
    char f[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> f[i][j];
        }
    }

    bool flag=true;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            //int r=max(j-1, 0);
            //int l=min(j+1, w-1);
            //int t=max(i-1, 0);
            //int b=min(i+1, h-1);
            if(f[i][j]=='#'){
                if(i>0&&f[i-1][j]=='#'){
                    continue; 
                }
                if(i<(h-1)&&f[i+1][j]=='#'){
                    continue; 
                } 
                if(j>0&&f[i][j-1]=='#'){
                    continue; 
                }
                if(j<(w-1)&&f[i][j+1]=='#'){
                    continue; 
                }
                flag=false;
                break;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}
