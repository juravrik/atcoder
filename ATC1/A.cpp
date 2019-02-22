#include <bits/stdc++.h>
using namespace std;

int h, w;
char c[1000][1000];
bool reached[1000][1000];

bool search(int x, int y){

    if(x<0 || h <=x || y<0 || w <= y)return false;

    if(c[x][y] == 'g')return true;
    if(c[x][y] == '#' || reached[x][y])return false;


    reached[x][y] = true;

    return (search(x+1, y) || search(x-1, y)) || (search(x, y+1) || search(x, y-1));
}

    
int main(){
    int x, y;
    cin >> h >> w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                x=i;
                y=j;
            }
            reached[i][j] = false;
        }
    }

    if(search(x, y)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
