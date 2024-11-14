#include <stdio.h>
#include <math.h>

int main(void) {
	double arr[5];
	double sum1 = 0;
	double sum2 = 0;
	double m;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%lf", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		sum1 += arr[i];
	}
	m = sum1 / 5;
	for (int i = 0; i < 5; i++) {
		sum2 += pow((arr[i]-m), 2);
	}
	printf("Standard Deviation = %.3f", sqrt(sum2/5));
	return 0;
}