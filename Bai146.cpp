#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string ChuanHoa(string s) {
    string tmp = "";
    tmp += toupper(s[0]);
    for(int i = 1; i < s.length(); i++) {
        tmp += tolower(s[i]);
    }
    return tmp;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        cin.ignore();
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector <string> vt;
        while(ss >> tmp) {
            vt.push_back(ChuanHoa(tmp));
        }
        
        if(n == 1) {
            cout << *vt.rbegin() << " ";
            for(auto i = 0; i < vt.size() - 1; i++) {
                cout << vt[i] << " ";
            }
        }
        if(n == 2) {
            for(auto i = 1; i < vt.size(); i++) {
                cout << vt[i] << " ";
            }
            cout << vt[0];
        }
        cout << endl;
    }
    return 0;
}