#include <math.h>


double f(int);

int findFirstElement(double eps) {
	int i = 0;
	f(i);
	while (fabs(f(i)) > eps) {
		f(i);
		if (fabs(f(i)) <= eps)
		{
			break;
		}
		++i;
	}
	return i += 1;
}
