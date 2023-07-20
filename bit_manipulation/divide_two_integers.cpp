int divideTwoInteger(int dividend, int divisor) {
	// -ve if only one of them is -ve
	int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
	dividend = abs(dividend);
    divisor = abs(divisor);

	int quotient = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        ++quotient;
    }
	return sign*quotient;
} 