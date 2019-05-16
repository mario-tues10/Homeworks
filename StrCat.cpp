#include <cstdio>

char* strcat(char* dest, const char* src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++) {
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return dest;
}

int main(void) {
	char a[11] = "hello";
	char b[] = "hello";
	printf("%s \n", a);
	strcat(a, b);
	printf("%s ", a);


	return 0;
}