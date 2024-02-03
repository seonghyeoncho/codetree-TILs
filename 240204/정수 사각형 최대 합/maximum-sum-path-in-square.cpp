#include <bits/stdc++.h>

using namespace std;

int n;
int a[100][100], dp[100][100] = {0};

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;

    for(int i = 0; i < n;i++) {
        for(int j = 0; j < n; j++) cin>>a[i][j];
    }

    dp[0][0] = a[0][0];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if( i-1 >=0  && j - 1>=0) {
                if(dp[i-1][j] > dp[i][j-1]) dp[i][j] = a[i][j] + dp[i-1][j];
                else dp[i][j] = a[i][j] + dp[i][j-1];
            } else if(i-1 >=0) {
                dp[i][j] = a[i][j] + dp[i-1][j];
            } else if(j-1>=0) {
                dp[i][j] = a[i][j] + dp[i][j-1];
            }

        }
    }

    cout<<dp[n-1][n-1];
    return 0;
}