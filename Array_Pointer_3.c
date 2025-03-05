#include<stdio.h>

int main() {

	int b[] = { 8,7,6,5,4,3 };
	int* p;
	p = &b[3];

	for (int i = 0; i <= 2; i++) {
		printf("\n &b[3+%d] => %u \n",i,&b[3+i]);
		printf("\n(p+%d) => %u \n", i, p + i);
		printf("\n&p[%d] => %u\n", i, &p[i]);
		printf("\nvalue\n");
		printf("\nb[3+%d] => %d\n", i, b[3 + i]);
		printf("\np[%d] => %d\n", i, p[i]);
		printf("\n*(p+%d) => %d \n",i,*(p+i));
		printf("\n=======================\n");
	}

	for (int i = 0; i <= 3; i++) {
		printf("\n&b[3-%d] => %u\n", i, &b[3 - i]);
		printf("\n(p-%d) => %u \n",i, p - i);
		printf("\n&p[-%d] => %u \n",i,&p[-i]);
		printf("\nvalue\n");
		printf("\nb[3-%d] => %d\n", i, b[3 - i]);
		printf("\np[-%d] => %d \n",i,p[-i]);
		printf("\n*(p-%d) => %d\n",i,*(p-i));
		printf("\n========================\n");

	}

	return 0;
}