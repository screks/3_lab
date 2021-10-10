#include <stdio.h>
#include <math.h>


double f(int);

void print(int n, int k) {
	int i = 0;
	if (i >= n) {
		return;
	}
	else {
		do {
			if ((i + 1) % k == 0)
			{
				i++;
				continue;
			}
			else {
				printf("n = %d", i);
				printf(" f = %lf\n", f(i));
			}
			i++;
		} while (i < n);
	}
}
