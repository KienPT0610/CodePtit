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
        int n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                if(i % 2 == 0) cnt ++;
                if((n / i) % 2 == 0) cnt++;
            }
        }
        int x = sqrt(n);
        if(sqrt(n) == (int)x && x % 2 == 0) cnt--;
        cout << cnt << endl; 
    }
    return 0;
}