#include <cmath>
double areaSwitchCase(int ch, vector<double> a) {
	switch (ch) {
		case 1:
			return 2*acos(0.0)*a[0]*a[0];
		case 2:
			return a[0]*a[1];
	}
	return 0;
}
