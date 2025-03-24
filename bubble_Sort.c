#include<stdio.h>

int main() {

	int arr[] = { 7,13,17,11,9 };

	for (int i = 1; i <= 4; i++) {
		printf("\nitration %d = ",i);
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			printf("%d ",arr[j]);
		}

		printf("\n");
	}
	printf("\n");
	printf("Sorted Array : ");
	for(int i=0;i<5;i++){
	printf("%d ",arr[i]);
	}
	printf("\n\n");


	return 0;
}