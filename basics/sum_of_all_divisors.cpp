int sumOfAllDivisors(int n){
	int sum=0;
	for (int i = 1; i <= n/2; i++) {
		if(n%i==0) sum += i;
	}

 	sum += n;
	if(n>1) return sum+sumOfAllDivisors(n-1);
	else return 1;	
}