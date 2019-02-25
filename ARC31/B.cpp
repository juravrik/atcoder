#include <bits/stdc++.h>
using namespace std;

char c[10][10];
bool reached[10][10];

void search(int x, int y){
    if(x<0 || 10 <=x || y<0 || 10 <= y)return;
    if(reached[y][x] ==true) return;
    reached[y][x] = true;

    if(c[y][x] == 'x')return;
    search(x+1, y);
    search(x-1, y);
    search(x, y+1);
    search(x, y-1);
}

bool can_reached(){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(c[i][j] == 'o'){
                continue;
            }

            for(int k=0; k<10; k++){
                for(int l=0; l<10; l++){
                    reached[k][l]=false;
                }
            }

            c[i][j] = 'o';
            search(j, i);

            bool f=true;
            for(int k=0; k<10&&f; k++){
                for(int l=0; l<10&&f; l++){
                    if(!reached[k][l] && c[k][l]=='o'){
                        f=false;
                    }
                }
            }
            c[i][j] = 'x';
            if(f){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int x, y;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> c[i][j];
        }
    }

    if(can_reached()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}
