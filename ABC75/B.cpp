#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w; 
    char s[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> s[i][j];
        }
    }
    
    int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s[i][j]=='#'){
                continue;
            }

            int n=0;
            for(int k=0; k<8; k++){
                int nx = j+dx[k];
                int ny = i+dy[k];

                if(!(0<=nx && nx < w)){
                    continue;
                }
                if(!(0<=ny && ny < h)){
                    continue;
                }
                if(s[ny][nx]=='#'){
                    n++;
                }
            }
            s[i][j]= char(n+'0');
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}
