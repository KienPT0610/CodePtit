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
        ll n = s.length();
        ll j = 0;
        for(int i = n - 1; i >= 0; i--) {
            ll ss = 1;
            ll x = j;
            while(x--) {
                ss *= 2;
                ss %= 10;
            }
            j++;
            sum += (s[i] - '0') * ss;
            sum %= 10;
        }
        if(sum % 5 == 0) {
            cout << "Yes" << endl;
        } else cout << "No" << endl;
    }
    return 0;
}