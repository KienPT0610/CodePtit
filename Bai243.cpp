#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        ll a, s = 0;
        string b; cin >> a >> b;
        for(auto x : b) {
            s = (10*s + x - '0') % a;
        }
        cout << __gcd(s, a) << endl;
    }
    return 0;
}