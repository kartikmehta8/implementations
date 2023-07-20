#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	if ( x >= y) return x;
	return y;
}
void Swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}