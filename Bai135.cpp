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
        string s; cin >> s;
        while(s.length() != 1) {
            ll sum = 0;
            for(int i = 0; i < s.length(); i++) {
                sum += s[i] - '0';
            }
            s = to_string(sum);
        }
        if(s == "9") cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}