#include <stdio.h>

void F(int n) {
	if (n > 1) {
		F(n / 2);
	}
	printf("%d", n % 2);
}
int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	F(num);
	return 0;
}