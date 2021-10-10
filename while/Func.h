#include <math.h>
double sum(int n);
double summ2(double eps);
void print(int n, int k);
int findFirstElement(double eps);
int findFirstNegativeElement(double eps);


double f(int i) {
	return pow(-1, i) * pow(2,i) / (pow(i, i+1) + 1);
}
