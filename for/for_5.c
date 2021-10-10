#include <math.h>


double f(int);

int findFirstNegativeElement(double eps) {
	int i = 0;
	for (i;; i++) {
		if (fabs(f(i)) <= eps && f(i) < 0)
		{
			return i + 1;
		}
	}
}
