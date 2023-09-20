#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct ThiSinh {
    string name;
    string date;
    float a, b, c;
};

void nhap(ThiSinh &A) {
    getline(cin, A.name);
    cin >> A.date >> A.a >> A.b >> A.c;
}

void in(ThiSinh A) {
    cout << A.name << " ";
    cout << A.date << " ";
    cout << fixed << setprecision(1) << A.a + A.b + A.c << endl; 
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}