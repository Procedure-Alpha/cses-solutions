#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    int n = str.length();
    int max_sum=1;
    int curr_sum=1;
    for(int i=1;i<n;i++){
        if(str[i-1]==str[i]) curr_sum++;
        else{
            curr_sum=1;
        }
        max_sum = max(max_sum,curr_sum);
    }
    
    cout << max_sum << '\n';
}
    