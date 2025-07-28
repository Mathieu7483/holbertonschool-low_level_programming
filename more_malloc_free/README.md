<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.🧠 Projet : Approfondissement de la Gestion de Mémoire (malloc, free, exit, calloc, realloc) en C
Bienvenue dans ce projet qui étend ma maîtrise de la gestion dynamique de la mémoire en C, en introduisant des fonctions clés comme calloc, realloc et la gestion des sorties de programme avec exit ! Ce projet est crucial pour écrire des programmes C plus flexibles, capables d'ajuster dynamiquement leurs besoins en mémoire et de se terminer proprement.

# 🎯 Objectifs d'Apprentissage
À l'issue de ce projet, je suis capable d'expliquer clairement à quiconque, sans l'aide de Google :

Comment utiliser la fonction exit pour terminer un programme C avec un statut spécifique.

Ce que sont les fonctions calloc et realloc de la bibliothèque standard, et comment les utiliser efficacement.

La différence et les cas d'usage entre malloc, calloc et realloc.

# 🛠️ Technologies et Environnement
Langage : C

Compilateur : GCC (GNU Compiler Collection)

Options de compilation : -Wall -Werror -Wextra -pedantic -std=gnu89

Environnement : Ubuntu 20.04 LTS

Éditeurs : vi, vim, emacs

# 📖 Structure du Projet et Exercices
Ce dépôt contient divers exercices pratiques qui permettent de comprendre et d'appliquer l'utilisation de exit, calloc et realloc :

main.h : Mon fichier d'en-tête centralisé, incluant les prototypes de toutes les fonctions du projet, y compris _putchar.
* **[Lien vers mon main.h](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/more_malloc_free/main.h)**

* **[Lien vers 0-malloc_checked.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/more_malloc_free/0-malloc_checked.c)** : Une fonction qui alloue de la mémoire et gère les erreurs en utilisant exit.

* **[Lien vers 1-string_nconcat.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/more_malloc_free/1-string_nconcat.c)** : Une fonction qui concatène deux chaînes, en limitant le nombre de caractères de la seconde.

* **[Lien vers 2-calloc.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/more_malloc_free/2-calloc.c)** : Une fonction qui alloue de la mémoire pour un tableau et l'initialise à zéro.

* **[Lien vers 3-array_range.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/more_malloc_free/3-array_range.c)** : Une fonction qui crée un tableau d'entiers allant de min à max.

* **[Lien vers 100-realloc.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/more_malloc_free/100-realloc.c)** : Une fonction qui réalloue un bloc de mémoire existant.(Reconstruction de la fonction Realloc)


# 💡 Contraintes et Bonnes Pratiques
Ce projet adhère à des règles de codage strictes pour garantir la qualité du code et la bonne gestion de la mémoire :

Style Betty : Conformité aux normes de style Betty, vérifiée par betty-style.pl et betty-doc.pl.

Pas de variables globales : L'utilisation de variables globales est proscrite.

Modularité : Pas plus de 5 fonctions par fichier.

Restrictions de fonctions : Seules les fonctions malloc, free et exit sont autorisées de la bibliothèque standard C. Toute autre fonction comme printf, puts, etc., est interdite.

_putchar : La fonction _putchar est autorisée pour l'affichage (le fichier _putchar.c n'est pas à pousser).

Include Guards : Le fichier d'en-tête main.h doit être protégé par des include guards.

# 👨‍💻 Comment Compiler et Exécuter
Pour compiler les fichiers de ce projet, assure-toi d'avoir GCC installé sur un système Ubuntu 20.04 LTS. L'utilisation de Valgrind est fortement recommandée pour vérifier l'absence de fuites de mémoire.

Exemple de compilation et d'exécution (pour 0-malloc_checked.c) :

```bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-malloc_checked.c -o a
./a
```
Pour vérifier les fuites de mémoire avec Valgrind :

```bash

valgrind --leak-check=full ./a
```

# ✍️ Auteur
Mathieu GODALIER - Élève en programmation
