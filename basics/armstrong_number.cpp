int count(int x) {
    if (x < 10) return 1;
    return 1+count(x/10);
}

bool checkArmstrong(int n){
	int arm = 0, check = n;
	int digit = count(n);
	while (n > 0) {
		int d = n%10;
		arm += pow(d, digit);
		n /= 10;
	}
	return check == arm;
}
