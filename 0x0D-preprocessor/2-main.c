#include <stdio.h>
/**
* main - imprime le nom du fichier à partir duquel il a été compilé
*
* Return: always 0
*/
int main(void)
{
printf("%s\n", __FILE__);
return 0;
}
