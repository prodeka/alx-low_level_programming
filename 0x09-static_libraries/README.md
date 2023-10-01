### 0. A library is not a luxury but one of the necessities of life
Ce projet contient une bibliothèque statique appelée libmy.a qui met en œuvre différentes fonctions utilitaires en langage C.

#### Fonctions incluses

La bibliothèque libmy.a comprend les fonctions suivantes :

- `_putchar(char c)`: Permet d'afficher un caractère.
- `_islower(int c)`: Vérifie si un caractère est en minuscule.
- `_isalpha(int c)`: Vérifie si un caractère est une lettre alphabétique.
- `_abs(int n)`: Calcule la valeur absolue d'un entier.
- `_isupper(int c)`: Vérifie si un caractère est en majuscule.
- `_isdigit(int c)`: Vérifie si un caractère est un chiffre.
- `_strlen(char *s)`: Calcule la longueur d'une chaîne de caractères.
- `_puts(char *s)`: Affiche une chaîne de caractères suivie d'un saut de ligne.
- `_strcpy(char *dest, char *src)`: Copie une chaîne de caractères dans une autre.
- `_atoi(char *s)`: Convertit une chaîne de caractères en entier.
- `_strcat(char *dest, char *src)`: Concatène deux chaînes de caractères.
- `_strncat(char *dest, char *src, int n)`: Concatène les n premiers caractères de src à dest.
- `_strncpy(char *dest, char *src, int n)`: Copie les n premiers caractères de src dans dest.
- `_strcmp(char *s1, char *s2)`: Compare deux chaînes de caractères.
- `_memset(char *s, char b, unsigned int n)`: Remplit les n premiers octets de s avec la valeur b.
- `_memcpy(char *dest, char *src, unsigned int n)`: Copie les n premiers octets de src dans dest.
- `_strchr(char *s, char c)`: Cherche la première occurrence du caractère c dans la chaîne s.
- `_strspn(char *s, char *accept)`: Calcule la longueur de la sous-chaîne initiale de s composée uniquement des caractères présents dans accept.
- `_strpbrk(char *s, char *accept)`: Cherche dans s la première occurrence de l'un des caractères présents dans accept.
- `_strstr(char *haystack, char *needle)`: Cherche la première occurrence de la chaîne needle dans la chaîne haystack.

#### Comment utiliser la bibliothèque

Pour utiliser la bibliothèque libmy.a dans ton projet, tu peux suivre ces étapes :

1. Inclure le fichier d'en-tête "main.h" dans ton code source.
2. Lier ton code source avec la bibliothèque libmy.a lors de la compilation. Utilise la commande `gcc -std=gnu89 main.c -L. -lmy -o mon_programme` en remplaçant "main.c" par ton fichier source et "mon_programme" par le nom souhaité pour le fichier exécutable.
3. Exécuter le fichier exécutable généré.

Assure-toi que le fichier libmy.a et le fichier d'en-tête main.h sont présents dans le même répertoire que ton code source.

