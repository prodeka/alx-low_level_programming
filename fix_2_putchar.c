#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c = 10;
	char n = '0';
	printf("for int c\n");
	putchar(c + '0');
	putchar('\n');
	printf("%d\n", c + '0');
	printf("%d\n", '0'-c);
	printf("%d\n", '0');
	putchar(48);
	putchar('\n');
	putchar('c');
	putchar('\n');
	
	printf("for char n\n");
	putchar(n);	
	return 0;
}
