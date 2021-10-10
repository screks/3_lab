#include <math.h>


double f(int);

double sum(int n) {
	double sum = 0;
	int i = 0;
	if (n == 0) {
		return 0;
	}
	else {
		do {
			f(i);
			sum += f(i);
			++i;
		} while (i < n);
		return sum;
	}
}
