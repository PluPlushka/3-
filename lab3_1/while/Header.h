#include <math.h>
double sum(int n);
double summ2(double eps);
void print(int n, int k);
int findFirstElement(double eps);
int findFirstNegativeElement(double eps);
double f(int);

double f(int i) {
	return pow(-1, i) * 2*(i + 1) / (2+(i+1)*(i-1));
}
