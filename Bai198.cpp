#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string a[5002];

string Sum(string a, string b) {
    if(a.length() < b.length()) {
        a.insert(0, b.length() - a.length(), '0');
    } else {
        b.insert(0, a.length() - b.length(), '0');
    }
    string sum = "";
    int tmp = 0;
    for(int i = a.length() - 1; i >= 0; i--) {
        tmp = (a[i] - '0') + (b[i] - '0') + tmp;
        sum = to_string(tmp % 10) + sum;
        tmp /= 10;
    }
    if(tmp > 0) sum = to_string(tmp) + sum;
    return sum;
}

string Mul(string a, char b) {
    string m = "";
    int tmp = 0;
    for(int i = a.length() - 1; i >= 0; i--) {
        tmp = (a[i] - '0') *(b - '0') + tmp;
        m = to_string(tmp % 10) + m;
        tmp /= 10;
    }    
    if(tmp > 0) m = to_string(tmp) + m;
    return m;
}

string Nhan(string a, string b) {
    string kq = "";
    for(int i = b.length() - 1; i >= 0; i--) {
        string tmp = Mul(a, b[i]);
        tmp.insert(tmp.length(), b.length() - i - 1, '0');
        kq = Sum(kq, tmp);
    }
    return kq;
}

void solve() {
    a[0] = a[1] = "1";
    for(int i = 2; i < 5002; i++) {
        string tmp = "";
        string cnt = to_string(2 * (2*(i - 1) + 1)/(i - 1 + 2));
        a[i] = Nhan(cnt, a[i - 1]);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    int n; cin >> n;
    cout << a[n + 1] << endl;
    return 0;
}