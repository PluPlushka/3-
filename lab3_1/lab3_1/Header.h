#include <math.h>
double sum(int n);
double summ2(double eps);
void print(int n, int k);
int findFirstElement(double eps);
int findFirstNegativeElement(double eps);


double f(int i) {
	return pow(-1, i) * (i+1) / (pow(i, 3) - pow(i, 2) + 1);
}
