#include <math.h>


double f(int);

double summ2(double eps) {
	double sum = 0;
	int i = 0;
	double a = 0;
	a = f(i);
	while (fabs(a) > eps) {
		a = f(i);
		sum += a;
		++i;
	}
	return sum;
}
