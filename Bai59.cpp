#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        string s; cin >> s;
        int n = s.length();
        int cnt = n;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(s[i] == s[j]) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}