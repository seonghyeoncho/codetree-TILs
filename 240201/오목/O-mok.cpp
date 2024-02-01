#include <iostream>
using namespace std;

int g[20][20] = {0};


bool check(int x, int y) {
    if(x >= 2 && x <= 17) {
        
        if(y >=2 && y <=17) {
            if(g[x][y] == g[x - 2][y + 2] && g[x][y] == g[x - 1][y + 1] && g[x][y] == g[x + 1][y- 1] && g[x][y] == g[x + 2][y-2]) return true;
            if(g[x][y] == g[x + 2][y + 2] && g[x][y] == g[x + 1][y + 1] && g[x][y] == g[x -2][y-2] && g[x][y] == g[x -1][y-1]) return true;
        }
    } 
    
    if(x >= 2 && x <= 17 && g[x][y] == g[x - 2][y] && g[x][y] == g[x - 1][y] && g[x][y] == g[x + 1][y] && g[x][y] == g[x + 2][y]) return true;
    
    if(y >=2 && y <=17 && g[x][y] == g[x][y + 2] && g[x][y] == g[x][y + 1] && g[x][y] == g[x][y-1] && g[x][y] == g[x][y-2]) return true;
    
    

    return false;
}

int main() {
    for(int i = 0; i < 19; i++) {
        for(int j =0; j < 19; j++) cin>>g[i][j];
    }

    for(int i =0; i < 19; i++) {
        for(int j =0; j< 19; j++) {
            if(g[i][j] != 0) {
                if(check(i, j)) {
                    cout<< g[i][j] << '\n' << i + 1<< ' '<<j +1;
                    return 0;
                }
            }
        }
    }
    cout<<0;
    return 0;
}