#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	if (argc > 0)
	{
		printf("value of argv is %s", argv-1 );
		return 0;
	}
}
