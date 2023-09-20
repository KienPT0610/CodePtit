#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        string s; cin >> s;
        ll sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i % 2 == 0) {
                sum += s[i] - '0';
            } else sum -= s[i] - '0';
        }
        cout << (sum % 11 == 0) << endl;
    }
    return 0;
}