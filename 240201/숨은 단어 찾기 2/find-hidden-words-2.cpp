#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int n, m, answer =0;
string g[51];
bool visited[51][51];

void dfs(int x, int y, int c, int d) {
    if(c == 2) {
        answer++;
        return;
    }

    for(int i = 0; i < 8; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        if(nx < n && ny < m && nx >= 0 && ny >=0) {
            if(!visited[nx][ny]) {
                if(d == -1) {
                    if(g[nx][ny] == 'E') {
                        visited[nx][ny] = true;
                        dfs(nx, ny, c + 1, i);
                        visited[nx][ny] = false;
                    }
                } else {
                    if(g[nx][ny] == 'E' && i == d) {
                        visited[nx][ny] = true;
                        dfs(nx, ny, c + 1, i);
                        visited[nx][ny] = false;
                    }
                }
                
                
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n>>m;
    for(int i = 0; i < n; i++) cin>>g[i];


    for(int i= 0; i < n; i++) {
        for(int j =0; j < m;j++) {
            if(g[i][j] == 'L') dfs(i, j, 0, -1);
        }
    }

    cout<<answer;
    return 0;
}