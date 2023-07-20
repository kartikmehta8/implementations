#include<iostream>
using namespace std;

int main() {
	int n, even = 0, odd = 0;
	cin >> n;
	while (n > 0) {
		int t = n%10;
		if (t%2 == 0) even += t;
		else odd += t;
		n = n/10;
	}
	cout << even << " " << odd; 
}
