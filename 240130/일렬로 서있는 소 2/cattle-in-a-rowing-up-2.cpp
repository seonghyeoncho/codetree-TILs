#include <bits/stdc++.h>

using namespace std;

int ch[101];
int c = 0;

int main() {
    int n;cin>>n;
    for(int i=0; i< n; i++) cin>>ch[i];

    for(int i = 0; i<n-2; i++) {
        for(int j = i + 1; j<n-1; j++) {
            for(int k = j + 1; k<n; k++) {
                if(i < j && j < k) {
                    if(ch[i] < ch[j] && ch[j] < ch[k]) c++;
                }
            }
        }
    }

    cout<<c;
    return 0;
}