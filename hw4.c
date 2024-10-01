#include <stdio.h>

int main(void) {
	int num;
	int cnt = 0;
	int i = 0;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		printf("It is a prime number.\n");
	}
	else {
		printf("It is not a prime number.\n");
	}
	return 0;
}