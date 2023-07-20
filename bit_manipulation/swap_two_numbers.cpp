void swapNumber(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}