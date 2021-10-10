#include <math.h>


double f(int);

double summ2(double eps) {
	double sum = 0;
	int i = 0;
	double a = f(i);
	if (fabs(a) <= eps) {
		return 0;
	}
	else {
		do {
			a = f(i);
			sum += a;
			++i;
		} while (fabs(a) > eps);
		return sum;
	}
}
