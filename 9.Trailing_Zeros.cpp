#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	int sum = n/5;
	int r = n/5;
	while(r > 4) {
	    sum += r/5;
	    r /= 5;
	} 
	cout << sum;

}
