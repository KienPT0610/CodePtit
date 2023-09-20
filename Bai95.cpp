#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int n = 0;
int a[21] = {};

void display() {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void Back_track(int pos) {
    for(int i = 0; i <= 1; i++) {
        a[pos] = i;
        if(pos == n) {
            display(); 
        } else {
            Back_track(pos + 1);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        cin >> n; 
        Back_track(1);
        cout << endl;
    }
    return 0;
}