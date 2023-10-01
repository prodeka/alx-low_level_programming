### 0. It ain't what they call you, it's what you answer to

Ce programme est conçu pour afficher le nom du programme lui-même.


#### Compilation

Pour compiler le programme, exécutez la commande suivante dans votre terminal : 

``` shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o mynameis 0-whatsmyname.c
``` 

Assurez-vous d'avoir GCC (GNU Compiler Collection) installé sur votre système.

#### Exécution

Une fois le programme compilé, vous pouvez l'exécuter en utilisant la commande suivante :

``` shell 
./mynameis
```

Le programme affichera le nom du programme, y compris le chemin si celui-ci est spécifié.

#### Modification du nom du programme

Si vous renommez le programme, par exemple en le déplaçant vers un nouveau nom de fichier, vous pouvez toujours l'exécuter en utilisant le nouveau nom sans avoir à recompiler le programme.

### 1. Silence is argument carried out by other means

Ce projet consiste à créer un programme en langage C qui affiche le nombre d'arguments passés en ligne de commande.

Le programme principal `nargs.c` utilise les paramètres `argc` et `argv` de la fonction `main` pour compter le nombre d'arguments. Il exclut le nom du programme lui-même lors du calcul.

Pour compiler le programme, utilisez la commande suivante :

``` shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 nargs.c -o nargs
```

Après avoir compilé le programme, vous pouvez l'exécuter en utilisant la commande `./nargs` , suivie de zéro ou plusieurs arguments. Le programme affichera ensuite le nombre d'arguments passés.

Exemples d'utilisation :

``` shell
$ ./nargs 
0 
$ ./nargs hello 
1 
$ ./nargs "hello, world" 
1 
$ ./nargs hello, world 
2
```

Ce programme est développé dans le cadre de l'apprentissage du traitement des arguments en ligne de commande en langage C. Il peut être utilisé comme base pour des projets nécessitant la manipulation d'arguments passés par l'utilisateur.
### 2. The best argument against democracy is a five-minute conversation with the average voter

Le programme `2-args.c` est un programme en langage C qui affiche tous les arguments passés à celui-ci, un par ligne.

#### Compilation

Pour compiler le programme `2-args.c`, vous pouvez utiliser la commande suivante :

``` shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
```

Assurez-vous d'avoir remplacé `2-args.c` par le nom du fichier source du programme.

#### Utilisation

Une fois que vous avez compilé le programme, vous pouvez l'exécuter en ligne de commande. Voici quelques exemples d'utilisation :

``` shell
$ ./args
```

Ce commandement exécute le programme sans aucun argument, et il n'affichera que le nom du programme lui-même.

``` shell
$ ./args argument1 argument2 argument3
```

Ce commandement exécute le programme avec plusieurs arguments. Le programme affichera chaque argument sur une nouvelle ligne, y compris le premier argument qui est le nom du programme lui-même.

### 3. Neither irony nor sarcasm is argument

Ce programme effectue la multiplication de deux nombres entiers passés en arguments de ligne de commande et affiche le résultat.

#### Compilation

Pour compiler le programme, utilise la commande suivante :

``` shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
```

#### Utilisation

Exécute le programme en fournissant deux nombres entiers en arguments de ligne de commande. Voici un exemple :

``` shell
./mul 5 3
```

Cela multipliera les nombres 5 et 3, puis affichera le résultat :

``` shell
15
```

Si le programme est exécuté sans aucun argument, il affichera un message d'erreur correspondant :

``` shell
Erreur
```


### Auteur

Ce programme a été développé par : Serge TABE DJATO
github: [@prodeka](https://github.com/prodeka/)
mail: protazertyuiop@gmail.com