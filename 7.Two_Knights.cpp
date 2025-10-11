#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(long long i=1;i<=n;i++){
        long long ap = 4*(i-1)*(i-2);
        long long tp = (i*i) * (i*i-1) / 2;

        cout << tp-ap << '\n';
    }
    
}