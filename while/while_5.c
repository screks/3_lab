#include <math.h>

double f(int);

int findFirstNegativeElement(double eps) {
	int i = 0;
	f(i);
	while (fabs(f(i)) > 0) {
		f(i);
		if (fabs(f(i)) <= eps && f(i) < 0)
		{
			return i + 1;
		}
		++i;
	}
}
