#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int c = 0;

    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] == '(' && s[ i + 1] == '(') {
            for(int j = i + 2; j < s.size()-1; j++) {
                if(s[j] == ')' && s[j + 1] == ')') c++;
            }
        }
    }

    cout<<c;
    return 0;
}