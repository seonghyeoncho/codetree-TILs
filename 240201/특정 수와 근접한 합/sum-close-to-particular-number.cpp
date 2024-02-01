#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, m = 999999999;
    cin>>n>>s;
    int a[101];

    for(int i = 0; i < n; i++) cin>>a[i];

    for(int i = 0; i < n-1; i++) {
        for(int j= i +1;  j < n; j++) {
            int sum = 0;

            for(int k = 0; k < n; k++) {
                if(k != i && k != j) sum += a[k];
            }

            if(abs(s - sum) < m) m = abs(s - sum);
        }
    }

    cout<<m;
}