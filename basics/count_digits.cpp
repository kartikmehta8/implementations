int countDigits(int n){
	int num = n, count = 0;
	while (n > 0) {
		int t = n%10;
		if (t != 0 && num%t == 0) count++;
		n = n/10;
	}
	return count;
}