#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int steps = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j - 1] > arr[j]) {
            steps = steps + (arr[j - 1] - arr[j]);
            arr[j] = arr[j - 1];
        }

    }
    cout << steps << '\n';
}