#include <iostream>

using namespace std;

int m = 999999999;
int a[101] = {0};
int main() {
    int n;
    cin>>n;

    for(int i= 0; i < n; i++) cin>>a[i];

    for(int i = 0; i < n; i++) {
        int s = 0;
        for(int j = 0; j < n; j++) {
            if(i > j) s += (i-j)*a[j];
            else s += (j-i)*a[j];
        }

        if(s < m) m = s;
    }

    cout<<m;
    return 0;
}