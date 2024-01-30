#include <bits/stdc++.h>

using namespace std;
int m = 0;
int getNum(string s) {
    int result = 0;

    for(int i = 0; i < s.size(); i++) {
        int k = 1;

        if(s[i] == '1') for(int j = 0; j < s.size() - i - 1; j++) k*=2;
        else k =0;

        result+=k;
    }

    return result;
}

int main() {
    string s;
    cin>>s;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            s[i] = '1';
            int r = getNum(s);
            s[i] = '0';

            if(r > m) m = r;
        }
        else {
            s[i] = '0';
            int r = getNum(s);
            s[i] = '1';

            if(r > m) m = r;
        }
        
    }

    cout<<m;
    return 0;
}