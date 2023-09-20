#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ifstream myname ("PTIT.in");
    ofstream mydoc ("PTIT.out");
    while(!myname.eof()) {
        string s;
        getline(myname, s);
        mydoc << s << endl;
    }
    return 0;
}