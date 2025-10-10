#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        long long x, y;
        cin >> x >> y;
        long long m = max(x, y);
        long long num;
        if (m % 2 == 0) {
            if (x <= y) num = (m - 1) * (m - 1) + 1 + x - 1;
            else num = m * m - y + 1;
        }
        else {
            if (x <= y) num = m * m - x + 1;
            else num = (m - 1) * (m - 1) + 1 + y - 1;
        }

        cout << num << " " << '\n';
    }
}