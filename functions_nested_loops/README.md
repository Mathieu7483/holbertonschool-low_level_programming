# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

# 🚀 Projet : Fonctions et Boucles Imbriquées en C
Bienvenue dans ce projet fondamental qui explore les fonctions, les boucles imbriquées et les bases de l'organisation du code en C ! Ce travail est crucial pour développer des programmes structurés et efficaces, et il m'a permis de maîtriser les mécanismes de base du contrôle de flux et de la modularisation.

# 🎯 Objectifs d'apprentissage
À travers ce projet, je suis maintenant capable d'expliquer à quiconque, sans aucune aide :

Que sont les boucles imbriquées et comment les utiliser pour des tâches complexes (comme l'affichage de motifs).

Qu'est-ce qu'une fonction en C et comment l'utiliser pour organiser le code.

La différence fondamentale entre la déclaration et la définition d'une fonction.

Le rôle et l'importance d'un prototype de fonction.

Le concept de la portée des variables (scope).

La signification et l'utilité des flags de compilation GCC (-Wall, -Werror, -Wextra, -pedantic, -std=gnu89).

Que sont les fichiers d'en-tête (.h) et comment les utiliser avec #include.

# 🛠️ Technologies et Environnement
Langage : C

Compilateur : GCC (GNU Compiler Collection)

Options de compilation : -Wall -Werror -Wextra -pedantic -std=gnu89

Environnement : Ubuntu 20.04 LTS

Éditeurs : vi, vim, emacs

# 📖 Structure du Projet
Ce dépôt contient les fichiers d'exercices suivants, chacun illustrant les concepts abordés :

main.h : Mon fichier d'en-tête, contenant les prototypes de toutes les fonctions du projet, y compris _putchar.

* **[Lien vers 0-putchar.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/0-putchar.c)** : Une fonction qui imprime un caractère.

* **[Lien vers 1-alphabet.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/1-alphabet.c)** : Une fonction qui imprime l'alphabet en minuscules.

* **[Lien vers 2-print_alphabet_x10.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/2-print_alphabet_x10.c)** : Une fonction qui imprime l'alphabet 10 fois.

* **[Lien vers 3-islower.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/3-islower.c)** : Une fonction qui vérifie si un caractère est en minuscule.

* **[Lien vers 4-isalpha.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/4-isalpha.c)** : Une fonction qui vérifie si un caractère est une lettre.

* **[Lien vers 5-sign.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/5-sign.c)** : Une fonction qui imprime le signe d'un nombre.

* **[Lien vers 6-abs.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/6-abs.c)** : Une fonction qui calcule la valeur absolue d'un entier.

* **[Lien vers 7-print_last_digit.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/7-print_last_digit.c)** : Une fonction qui imprime le dernier chiffre d'un nombre.

* **[Lien vers 8-24_hours.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/8-24_hours.c)** : Une fonction qui imprime chaque minute de la journée de 00:00 à 23:59.

* **[Lien vers 9-times_table.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/9-times_table.c)** : Une fonction qui imprime la table de multiplication de 9.

* **[Lien vers 10-add.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/10-add.c)** : Une fonction qui additionne deux entiers.

* **[Lien vers 11-print_to_98.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/11-print_to_98.c)** : Une fonction qui imprime tous les nombres naturels de n à 98.

* **[Lien vers 100-times_table.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/100-times_table.c)** : Une fonction qui imprime la table de multiplication jusqu'à n.

* **[Lien vers 101-natural.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/functions_nested_loops/101-natural.c)** : Un programme qui calcule la somme des multiples de 3 ou 5.

* **[Lien vers 102-fibonacci.c]()** : Un programme qui affiche les 50 premiers nombres de Fibonacci. (à faire)

* **[Lien vers 103-fibonacci.c]()** : Un programme qui affiche les 100 premiers nombres de Fibonacci. (à faire)


# 💡 Contraintes et Bonnes Pratiques
Ce projet adhère à des règles de codage strictes pour garantir la qualité et la conformité :

Style Betty : Respect scrupuleux du style de code Betty, vérifié par betty-style.pl et betty-doc.pl.

Pas de variables globales : L'utilisation de variables globales est strictement interdite.

Modularité : Pas plus de 5 fonctions par fichier.

Interdiction de la Bibliothèque Standard : L'utilisation de fonctions comme printf, puts, etc., est formellement proscrite. Seule la fonction _putchar est autorisée pour l'affichage.

_putchar : Cette fonction est utilisée pour toutes les opérations d'affichage (le fichier _putchar.c n'est pas à pousser).

Protection d'en-tête : Le fichier main.h doit être protégé contre les inclusions multiples (include guards).


# ✍️ Auteur
Mathieu GODALIER - Élève en programmation
