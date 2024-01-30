#include <iostream>

using namespace std;

string s;
int c = 0;

int main() {
    cin>>s;
    
    for(int i = 0; i<s.size()-1; i++) {
        if(s[i] == '(') {
            for(int j = i + 1; j<s.size(); j++) {
                if(s[j] == ')') {
                    c++;
                }
            }
        }
    }

    cout<<c;
    return 0;
}