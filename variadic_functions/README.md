# 🚀 Projet : Fonctions Variadiques et `const` en C

Bienvenue dans ce projet dédié à l'exploration des **fonctions variadiques** et de l'utilisation du mot-clé `const` en C ! Ce travail fait partie de mon parcours d'apprentissage de la programmation, et il m'a permis de solidifier ma compréhension de concepts fondamentaux et avancés du langage C.

## 🎯 Objectifs d'apprentissage

À travers ce projet, j'ai cherché à maîtriser les points suivants :

* **Comprendre les fonctions variadiques** : Qu'est-ce qu'une fonction variadique et pourquoi est-elle utile ?
* **Maîtriser les macros `va_start`, `va_arg` et `va_end`** : Comment utiliser ces macros de la bibliothèque `<stdarg.h>` pour manipuler un nombre variable d'arguments.
* **Appliquer le qualificateur de type `const`** : Pourquoi et comment utiliser `const` pour améliorer la robustesse et la clarté du code.

## 🛠️ Technologies et Environnement

* **Langage** : C
* **Compilateur** : GCC (GNU Compiler Collection)
* **Options de compilation** : `-Wall -Werror -Wextra -pedantic -std=gnu89`
* **Environnement** : Ubuntu 20.04 LTS
* **Éditeurs** : `vi`, `vim`, `emacs`, 'vscode'

## 📖 Structure du Projet

Ce dépôt contient les fichiers suivants, chacun illustrant un aspect des fonctions variadiques ou de l'utilisation de `const` :

* `variadic_functions.h` : Mon fichier d'en-tête contenant les prototypes de toutes les fonctions.
* **(https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variadic_functions/variadic_functions.h)**
* **[0-sum_them_all.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variadic_functions/0-sum_them_all.c)** : Une fonction qui additionne tous ses arguments.: Une fonction qui additionne tous ses arguments.
* **[Lien vers 1-print_numbers.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variadic_functions/1-print_numbers.c)** : Une fonction qui imprime des nombres, séparés par un séparateur donné.
* **[Lien vers 2-print_strings.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variadic_functions/2-print_strings.c)** : Une fonction qui imprime des chaînes de caractères.
* **[Lien vers 3-print_all.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variadic_functions/3-print_all.c)** : Une fonction plus générique capable d'imprimer différents types de données.

*(Chaque lien doit pointer vers le fichier source correspondant dans ton dépôt GitHub. Par exemple, si ton fichier `0-sum_them_all.c` est directement à la racine de ton projet, le lien pourrait être `[0-sum_them_all.c](./0-sum_them_all.c)`.)*

## 💡 Contraintes et Bonnes Pratiques

Ce projet a été réalisé en respectant des exigences strictes pour garantir la qualité du code :

* **Style Betty** : Respect du style de code Betty, vérifié par `betty-style.pl` et `betty-doc.pl`.
* **Pas de variables globales** : Toutes les variables sont locales.
* **Gestion de la mémoire** : Utilisation exclusive de `malloc`, `free` et `exit` pour la gestion de la mémoire.
* **Nombre de fonctions par fichier** : Pas plus de 5 fonctions par fichier.
* **Protection d'inclusion** : Tous les fichiers d'en-tête sont protégés par des include guards.
* **`_putchar`** : Utilisation de `_putchar` pour l'affichage (non fourni dans le dépôt).

## 👨‍💻 Comment compiler et exécuter

Pour compiler les fichiers de ce projet, assurez-vous d'avoir GCC installé sur un système Ubuntu 20.04 LTS.

Exemple de compilation (pour un fichier spécifique, par exemple `0-sum_them_all.c` avec son `main.c` de test) :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-sum_them_all.c -o sum_them_all
./sum_them_all
