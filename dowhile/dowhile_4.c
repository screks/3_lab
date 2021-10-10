#include <math.h>


double f(int);

int findFirstElement(double eps) {
	int i = 0;
	f(i);
	do {
		f(i);
		if (fabs(f(i)) <= eps)
		{
			break;
		}
		++i;
	} while (fabs(f(i)) > eps);
	return i += 1;
}
