#ifndef MAIN_H
#define MAIN_H

/*
* _puts_recursion - Affiche une chaîne de caractères, suivie d'une nouvelle ligne.
* La chaîne de caractères à afficher.
* Prototype function used in recurion project
*/
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int get_root(int n, int guess);
int is_prime_number(int n);
int check_num(int n, int checker);
#endif