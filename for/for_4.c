#include <math.h>


double f(int);

int findFirstElement(double eps) {
	int i = 0;
	for (i;; i++) {
		if (fabs(f(i)) <= eps)
		{
			break;
		}
	}
	return i += 1;
}
