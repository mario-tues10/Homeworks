#include <iostream>
#include <cstdio>
using namespace std;
double square_root(double S, int n) {
	double x0 = S;
	for (int i = 0; i < n; i++) {
		x0 = (x0 + (S / x0)) / 2;
	}
	return x0;
}

int main()
{
	double number = 125348;
	printf("%f\n", square_root(number, 20));

	return 0;
}