#include <stdio.h>
#include <math.h>


double f(int);

void print(int n, int k) {
	for (int i = 0; i < n; i++) {
		if ((i + 1) % k == 0)
		{
			continue;
		}
		printf("n = %d", i);
		printf(" f = %lf\n", f(i));
	}

}
