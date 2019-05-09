#include <cstdio>
void print_array(int* pa, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", pa[i]);
	}
	printf("\n");
}
void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}
void reverse(int* pa, int size) {
	int i = 0;
	int j = size - 1;
	while (i < j) {
		swap(&pa[i], &pa[j]);
		i++;
		j--;
	}
	print_array(pa, size);
}
int main(void) {
	int a[5] = { 1,2,7,15,4 };
	int* q = a;
	int size = sizeof(a) / sizeof(int);
	print_array(q, size);
	reverse(q, size);
	return 0;
}