#include <iostream>

using namespace std;
int n, answer = 0;
int g[21][21] = {0};

int main() {
    cin>>n;

    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>g[i][j];
        }
    }

    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n- 2; j++) {
            

            for(int k = 0 ; k < n; k++) {
                for(int l = 0; l < n-2; l++) {
                    if(k == i && (l == j || l == j + 1 || l == j + 2)) continue;
                    int sum = g[i][j] + g[i][j + 1] + g[i][j + 2];

                    
                    else sum += g[k][l] + g[k][l + 1] + g[k][l + 2];
                    
                    if(sum > answer) answer = sum;
                }
            }

            
        }
    }
    
    cout<<answer;

    return 0;
}