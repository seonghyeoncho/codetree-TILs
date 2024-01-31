#include <iostream>
using namespace std;
int main() {
    int n, m = 0;
    cin>>n;
    int a[n];

    for(int i= 0; i < n; i++) cin>>a[i];

    for(int i =0; i < n; i++) {
        for(int j = i + 2; j < n; j++) {
            if(m < a[i] + a[j]) m = a[i] + a[j];
        }
    }

    cout<<m;
    return 0;
}