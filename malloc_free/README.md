# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

# 💾 Projet : Gestion Dynamique de la Mémoire avec malloc et free en C
Bienvenue dans ce projet essentiel qui plonge au cœur de la gestion dynamique de la mémoire en C, en explorant les fonctions malloc et free ! Comprendre comment allouer et désallouer de la mémoire explicitement est une compétence fondamentale pour tout programmeur C, car elle permet de créer des structures de données de taille variable et de gérer efficacement les ressources. Ce projet a été clé pour maîtriser ces concepts vitaux.

# 🎯 Objectifs d'Apprentissage
À la fin de ce projet, je suis capable d'expliquer clairement à n'importe qui, sans aucune aide :

La différence entre l'allocation automatique et l'allocation dynamique de mémoire.

Ce que sont malloc et free et comment les utiliser correctement.

Pourquoi et quand il est nécessaire d'utiliser malloc.

Comment utiliser Valgrind pour détecter les fuites de mémoire.

# 🛠️ Technologies et Environnement
Langage : C

Compilateur : GCC (GNU Compiler Collection)

Options de compilation : -Wall -Werror -Wextra -pedantic -std=gnu89

Environnement : Ubuntu 20.04 LTS

Éditeurs : vi, vim, emacs

Outil de débogage mémoire : Valgrind

# 📖 Structure du Projet et Exercices
Ce dépôt contient divers exercices conçus pour illustrer les différentes facettes de l'allocation et de la libération de mémoire :

main.h : Mon fichier d'en-tête, contenant les prototypes de toutes les fonctions du projet, y compris _putchar.

* **[Lien vers 0-create_array.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/malloc_free/0-create_array.c)** : Une fonction qui crée un tableau de caractères, l'initialise avec un caractère spécifique, et retourne un pointeur vers celui-ci.

* **[Lien vers 1-strdup.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/malloc_free/1-strdup.c)** : Une fonction qui retourne un pointeur vers une nouvelle chaîne de caractères qui est une duplication de la chaîne passée en argument.

* **[Lien vers 2-str_concat.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/malloc_free/2-str_concat.c)** : Une fonction qui concatène deux chaînes de caractères dans un nouvel espace alloué dynamiquement.

* **[Lien vers 3-alloc_grid.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/malloc_free/3-alloc_grid.c)** : Une fonction qui retourne un pointeur vers une grille 2D d'entiers de taille width x height.

* **[Lien vers 4-free_grid.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/malloc_free/4-free_grid.c)** : Une fonction qui libère la mémoire allouée par alloc_grid.

* **[Lien vers 100-argstostr.c]()** : Une fonction qui concatène tous les arguments d'un programme dans une seule chaîne. (à faire)

* **[Lien vers 101-strtow.c]()** : Une fonction qui divise une chaîne en mots. ( à faire)


# 💡 Contraintes et Bonnes Pratiques
Ce projet a été développé en respectant des exigences strictes pour garantir la qualité du code et la bonne gestion de la mémoire :

Style Betty : Conformité aux normes de style Betty, vérifiée par betty-style.pl et betty-doc.pl.

Pas de variables globales : L'utilisation de variables globales est proscrite.

Modularité : Pas plus de 5 fonctions par fichier.

Gestion de la mémoire : Seules les fonctions malloc et free sont autorisées de la bibliothèque standard C. Toute autre fonction comme printf, puts, calloc, realloc, etc., est interdite.

_putchar : La fonction _putchar est autorisée pour l'affichage (le fichier _putchar.c n'est pas à pousser).

Include Guards : Le fichier d'en-tête main.h doit être protégé par des include guards.

# 👨‍💻 Comment verifier la mémoire
Pour vérifier les fuites de mémoire avec Valgrind :
```bash

valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
Mathieu GODALIER- Élève en programmation
