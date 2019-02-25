#include <bits/stdc++.h>
using namespace std;

int h, w;
char c[1000][1000];
bool reached[1000][1000];

bool search(int x, int y){

    if(x<0 || w <=x || y<0 || h <= y)return false;

    if(c[y][x] == 'g')return true;
    if(c[y][x] == '#' || reached[y][x])return false;


    reached[y][x] = true;

    return (search(x+1, y) || search(x-1, y)) || (search(x, y+1) || search(x, y-1));
}

    
int main(){
    int x, y;
    cin >> h >> w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                x=j;
                y=i;
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
