#include<stdio.h>

int main() {

	int num = 656;

	char* p;
	p = &num;
	printf("\naddress using num %u\n", &num);
	printf("\naddress using p %u\n",p+0);
	printf("\naddress using p+1 %u \n",p+1);
	printf("\naddress using p+2 %u\n",p+2);
	printf("\naddress using p+3 %u\n",p+3);
	printf("\n==============================\n");

	printf("\nValue Using *p %d\n",*(p+0));
	printf("\nvalue using *(p+1) %u\n",*(p+1));
	printf("\nvalue using *(p+2) %u\n", *(p + 2));
	printf("\nvalue using *(p+3) %u\n", *(p + 3));

	return 0;
}