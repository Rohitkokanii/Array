#include<stdio.h>

int main() {

	int arr[5];

	printf("\nEnter 5 no. = ");

	for (int i = 0; i <=4; i++) {
		scanf_s("%d",&arr[i]);
	}

	for (int i = 0; i <= 4; i++) {
		printf("%d",arr[i]);
	}

	return 0;
}
