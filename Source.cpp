#include <iostream>
#include <cstdio>
using namespace std;
int c = 0;
int incrementation() {
	c++;
	return c;
}
int main() {
	printf("%d\n", incrementation());
	printf("%d\n", incrementation());
	printf("%d\n", incrementation());

	return 0;
}