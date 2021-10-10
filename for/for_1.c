#include <math.h>


double f(int);

double sum(int n) {
	double sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += f(i);
	}
	return sum;
}
