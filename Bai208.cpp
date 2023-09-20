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
        int kq = 0;
        while(s.find("100") != string::npos) {
            kq += 3;
            s.erase(s.begin() + s.find("100"), s.begin() + s.find("100") + 3);
        }
        if(kq != 0) cout << kq << endl;
        else cout << "" << endl;
    }
    return 0;
}