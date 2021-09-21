#include<stdio.h>
int main() {
	int x[10];
	printf("Enter Number to Array : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &x[i]);
	}
	printf("Data in array : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", x[i]);
	}
	printf("\nResult : ");
	for (int i = 0; i < 10; i++) {
		if (i > 0) {
			if (x[i] % 2 == 0 && x[i - 1] % 2 == 1 && x[i + 1] % 2 == 1) {
				printf("%d ", x[i]);
			}
		}
	}
	return 0;
}