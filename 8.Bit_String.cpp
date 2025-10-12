#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans=1;
    const int mod = 1e9+7;
    for(long long i=1;i<=n;i++) {
        ans*=2;
        ans%=mod;
    }
    cout << ans << '\n';
}