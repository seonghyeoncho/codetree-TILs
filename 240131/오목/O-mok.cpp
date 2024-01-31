#include <iostream>
using namespace std;
int g[20][20] = {0};

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

bool visited[20][20] = {false};
int answer = 0;
pair<int, int> p;

void dfs(int x, int y, int d, int c) {
    visited[x][y] = true;
    if(c == 5) {
        answer = d;
        return;
    }

    for(int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 19 && ny < 19 && nx >= 0 && ny >= 0) {
            if(!visited[nx][ny] && g[nx][ny]!=0) {
                if(d == g[nx][ny]) {
                    dfs(nx, ny,g[nx][ny], c + 1);
                    if(c == 2) p = {nx + 1, ny + 1};
                }
            }
        }
    }
}

int main() {
    for(int i = 0; i < 19; i++) {
        for(int j =0; j < 19; j++) cin>>g[i][j];
    }

    for(int i =0; i < 19; i++) {
        for(int j =0; j< 19; j++) {
            if(g[i][j] != 0) dfs(i, j, g[i][j], 1);
        }
    }
    cout<<answer << '\n' << p.first << ' ' <<p.second;
    return 0;
}