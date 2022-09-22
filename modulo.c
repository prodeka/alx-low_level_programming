#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m= 0;
	int n= 0;
	int result = 0;

	printf("first number: ");
	scanf("%d", &n);
	printf("second number: ");
	scanf("%d", &m);

	result = n%m;
	
	printf("modulo is %d", result);

	return 0;
}
