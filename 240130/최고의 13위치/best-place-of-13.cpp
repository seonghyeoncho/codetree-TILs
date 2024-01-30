#include <iostream>
using namespace std;

int a[21][21] = {0};
int m = 0;
int main() {
    int n; cin>>n;

    for(int i = 0; i< n; i++) {
        for(int j = 0; j < n; j++) cin>>a[i][j];
    }
        

    for(int i = 0; i< n; i++) {
        for(int j = 0; j < n-2; j++) {
            int sum = a[i][j] + a[i][j+1] + a[i][j+2];
            if(sum > m) m = sum;
        }
    }

    cout<<m;
    return 0;
}