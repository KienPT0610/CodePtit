#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

ll ChuyenNam(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '6') s[i] = '5';
    }
    return stoll(s);
}

ll ChuyenSau(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '5') s[i] = '6';
    }
    return stoll(s);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        string a, b;
        cin >> a >> b;
        cout << ChuyenNam(a) + ChuyenNam(b) << " ";
        cout << ChuyenSau(a) + ChuyenSau(b) << endl;
    }
    return 0;
}