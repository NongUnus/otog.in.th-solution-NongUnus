#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, cmd;
    cin >> n >> cmd;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(cmd == 0) {
        sort(a.begin(), a.end());
    }else if(cmd == 1) {
        sort(a.rbegin(), a.rend());
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}