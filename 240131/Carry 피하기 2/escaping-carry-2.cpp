#include <iostream>
using namespace std;
int a[21], m = -1;

bool check_carry(int a, int b, int c) {
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    int k;

    if(s1.size() > s2.size()) {
        if(s3.size() > s2.size()) k = s2.size();
        else k = s3.size();
    } else {
        if(s3.size() > s1.size()) k = s1.size();
        else k = s3.size();
    }

    for(int i = 0; i < k; i++) {
        if(stoi(s1)%(10* (i +1)) + stoi(s2)%(10* (i +1)) + stoi(s3)%(10* (i +1)) > 10) return true;

    }
    return false;
}

int main() {
    int n;cin>>n;
    for(int i = 0; i<n; i++) cin>>a[i];

    for(int i =0; i<n-2; i++) {
        
        for(int j = i + 1; j< n-1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(!check_carry(a[i], a[j], a[k])) {
                    if(m < a[i]+ a[j] + a[k]) m = a[i]+ a[j] + a[k];
                }
            }
        }
    }

    cout<<m;
    return 0;
}