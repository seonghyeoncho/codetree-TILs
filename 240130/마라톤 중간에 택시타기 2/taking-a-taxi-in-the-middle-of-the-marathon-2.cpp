#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> pos;

int m = 999999999;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n; cin>>n;
    for(int i =0; i < n; i++) {
        int x, y;
        cin>>x>>y;
        pos.push_back({x, y});

    }

    for(int i = 1; i < n-1; i++) {
        vector<pair<int, int>> tmp = pos;
        tmp.erase(tmp.begin() + i);
        int d= 0;
        for(int j = 0; j < n-1; j++) {
            d+=(abs(tmp[j].first-tmp[j+1].first) + abs(tmp[j].second-tmp[j+1].second));
        }   
        if(d < m) m = d;
    }

    cout<<m;
    return 0;
}