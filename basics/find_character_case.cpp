#include<iostream>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') cout << 0;
	else if (ch >= 'A' && ch <= 'Z') cout << 1;
	else cout << -1;
}
