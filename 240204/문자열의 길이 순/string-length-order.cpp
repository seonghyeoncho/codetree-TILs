#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    string s[30];
    vector<pair<int, int>> sl;
    for(int i = 0; i < n;i++) {
        cin>>s[i];
        sl.push_back({s[i].size(), i});
    }
    sort(sl.begin(), sl.end());
    for(int i = 0; i < n;i++) {
        cout<<s[sl[i].second]<<'\n';
    }
    return 0;
}