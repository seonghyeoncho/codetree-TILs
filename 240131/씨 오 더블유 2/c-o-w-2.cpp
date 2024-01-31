#include <iostream>
using namespace std;

int main() {
    int n;cin>>n;
    string s;cin>>s;


    int c = 0;

    for(int i =0; i<s.size(); i++) {
        if(s[i] == 'C') {
            for(int j = i + 1; j < s.size(); j++) {
                if(s[j] == 'O') {
                    for(int k = j + 1; k < s.size(); k++) {
                        if(s[k] == 'W') c++;
                    }
                }
            }
        }
    }

    cout<<c;
    return 0;
}