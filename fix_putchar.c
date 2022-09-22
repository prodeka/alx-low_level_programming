#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 6;
	putchar(n +'0');
	putchar('\n');
	printf("ceci est la sortie de putchar(n + '0' en asci) %d\n", n+'0');
	printf("ceci est le caractere issu de la table asci de %d: %c",n+'0',n+'0');
	return 0;
}
