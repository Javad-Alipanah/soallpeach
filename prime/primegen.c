#include<stdio.h>
#include<math.h>

int main() {
	int i;
	int j;
	int prime;

	printf("{ 2");
	for (i = 3; i < 46341; i++) {
		prime = 1;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime)
			printf(", %d", i);		
	}
	printf("}\n");
	return 0;
}