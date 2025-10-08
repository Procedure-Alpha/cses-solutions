#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long act_sum = 0;
    long long exp_sum = (n*(n+1))/2;
    for (long long i=1;i<n;i++){
        long long num;
        cin>>num;
        act_sum+=num;
    }
    cout<<exp_sum-act_sum<<'\n';
}
    