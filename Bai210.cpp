#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ifstream file;
    file.open("DATA.in");
    int n;
    map <int, int> mp;
    while(file >> n) {
        mp[n]++;
    }
    for(auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}