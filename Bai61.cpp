#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        string s; cin >> s;
        for(int i = 0; i < s.length(); i ++) {
            if(s[i] != '0') {
                int cnt = 1;
                for(int j = i + 1; j < s.length(); j++) {
                    if(s[i] == s[j]) {
                        s[j] = '0';
                        cnt ++;
                    } else {
                        break;
                    }
                }
                cout << s[i] << cnt;
            }
        }
        cout << endl;
    }
    return 0;
}