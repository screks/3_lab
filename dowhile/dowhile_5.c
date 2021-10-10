#include <math.h>


double f(int);

int findFirstNegativeElement(double eps) {
	int i = 0;
	f(i);
	do {
		f(i);
		if (fabs(f(i)) <= eps && f(i) < 0)
		{
			return i + 1;
		}
		++i;
	} while (abs(f(i)) > 0);
}
