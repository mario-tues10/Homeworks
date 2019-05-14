#include <cstdio>
void print_arr(char* string) {
	for (int i = 0; string[i] != '\0'; i++) {
		printf("%c",string[i]);
	}
	printf("\n");
}
void copy(char* source, char* copy) {
	int i;
	for (i = 0; source[i] != '\0'; i++) {
		copy[i] = source[i];
	}
	copy[i] = '\0';
	print_arr(copy);
}
int main(void) {

	char a[13] = "Hello World!";
	char b[13];
	print_arr(a);
	copy(a, b);

	return 0;
}