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
        int cnt1 = 0, cnt2 = 0;
        for(int i = 2; i < n; i++) {
            if(n % i == 0) cnt2++;
            while(n % i == 0) {
                cnt1++;
                n /= i;
            }   
        }
        if(n > 1) {
            cnt1++; cnt2++;
        }
        if(cnt1 == cnt2 && cnt1 == 3)  cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}