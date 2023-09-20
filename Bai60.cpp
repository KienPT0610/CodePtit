#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--)	{
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector <int> vt;
        while(ss >> tmp) {
            int x = stoi(tmp);
            vt.push_back(x);
        }
        int m = vt.size();
        int c = 0, l = 0;
        for(auto x : vt) {
            if(x % 2 == 0) c++;
            else l++;
        }
        if((m % 2 == 0 && c > l) || (m % 2 != 0 && l > c)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}