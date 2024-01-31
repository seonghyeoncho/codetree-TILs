#include <bits/stdc++.h>

using namespace std;

int n, m = 999999999;
int a[1004] = {0};

int main() {
    cin>>n;
    for(int i =0; i < n; i++) cin>>a[i];

    for(int i= 0; i< n; i++) {
        int sum = 0;

        for(int j = 0; j < n; j++) {
            if(i + j >= n) sum += a[(i + j) - n] * j;
            else sum += a[i + j] * j;
        }

        if (sum < m) m = sum;
    }

    cout<<m;
    return 0;
}