#include <bits/stdc++.h>

using namespace std;

int r, c, answer = 0;
char g[15][15];

void dfs(char d, int x, int y, int jump) {
    if(jump == 3) {
        if(x == r-1 && y == c-1) answer++;
        return;
    }

    for(int i = x + 1; i < r; i++) {
        for(int j = y + 1; j < c; j++) {
            if(d == 'W' && g[i][j] == 'B') dfs(g[i][j], i, j, jump+1);
            else if(d == 'B' && g[i][j] == 'W') dfs(g[i][j], i, j, jump+1);
        }
    }
}

int main() {
    cin>>r>>c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) cin>>g[i][j];

    dfs(g[0][0], 0, 0, 0);
    cout<<answer;
    return 0;
}