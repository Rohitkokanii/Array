#include<stdio.h>

int main() {

	int b[] = { 8,7,6,5,4,3 };

	int* p;
	p = &b[0];

	for (int i = 0; i <=5 ; i++) {
		printf("\n &b[%d]=> %u\n", i, &b[i]);
		printf("\n(p+%d)=> %u \n", i, p + i);
		printf("\n&p[%d]=>%u\n",i,&p[i]);
		printf("\nValue =>\n");
		printf("\nb[%d] => %d\n", i, b[i]);
		printf("\np[%d]=> %d\n",i, p[i]);
		printf("\n*(p+%d)=> %d\n", i, *(p + i));
		printf("\n===============\n");

	}
	return 0;
}