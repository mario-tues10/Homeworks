#include <cstdio>



using namespace std;



int secondNum(int t[], int size) {

	int max = t[0];

	for (int i = 0; i <= size; i++) {

		if (max < t[i]) {

			max = t[i];

		}

	}

	int secN = max;
	
	int diff = max - t[0];
		
	for (int j = 0; j < size; j++) {

		if (t[j] == max) continue;



		if (((max - t[j]) < diff) || diff == 0) {

			secN = t[j];

			diff = max - t[j];

		}

	}

	return secN;

}



int main()

{

	int t1[] = { 747,15,98,423,453,44 };

	int size = sizeof(t1) / sizeof(int);

	printf("%d ", secondNum(t1, size));

	return 0;

}