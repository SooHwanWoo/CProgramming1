#include <stdio.h>

int main(void) {
	int arr[5];
	int oddnumbers[5];
	int evennumbers[5];
	int i, j=0, k=0;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			evennumbers[j] = arr[i];
			j++;
		}
		else {
			oddnumbers[k] = arr[i];
			k++;
		}
	}
	printf("Odd numbers: ");
	for (i = 0; i < k; i++) {
		printf("%d ", oddnumbers[i]);
	}
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < j; i++) {
		printf("%d ", evennumbers[i]);
	}
	return 0;
}