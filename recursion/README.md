<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/img/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.
# 🔄 Projet : Maîtrise de la Récursivité en C
Bienvenue dans ce projet dédié à l'exploration et la maîtrise de la récursivité en C ! La récursivité est une technique de programmation élégante où une fonction s'appelle elle-même pour résoudre un problème. Ce projet m'a permis de comprendre comment penser récursivement et d'appliquer cette approche pour des solutions concises et efficaces.

# 🎯 Objectifs d'Apprentissage
À la fin de ce projet, je suis capable d'expliquer à quiconque, sans l'aide de ressources externes :

Ce qu'est la récursivité et comment elle fonctionne.

Comment implémenter la récursivité dans un programme C.

Les situations appropriées où la récursivité est une solution optimale.

Les situations où la récursivité devrait être évitée (par exemple, problèmes de performance ou de pile).

# 🛠️ Technologies et Environnement
Langage : C

Compilateur : GCC (GNU Compiler Collection)

Options de compilation : -Wall -Werror -Wextra -pedantic -std=gnu89

Environnement : Ubuntu 20.04 LTS

Éditeurs : vi, vim, emacs

# 📖 Structure du Projet et Exercices
Ce dépôt contient une série d'exercices conçus pour explorer différents aspects de la récursivité. Chaque fichier illustre une application spécifique de cette technique :

main.h : Mon fichier d'en-tête centralisé, incluant les prototypes de toutes les fonctions du projet, y compris _putchar.
* **[Lien vers main.h](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/main.h)** 

* **[Lien vers 0-puts_recursion.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/0-puts_recursion.c)** : Une fonction récursive qui imprime une chaîne de caractères.

* **[Lien vers 1-print_rev_recursion.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/1-print_rev_recursion.c)** : Une fonction récursive qui imprime une chaîne à l'envers.

* **[Lien vers 2-strlen_recursion.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/2-strlen_recursion.c)** : Une fonction récursive qui retourne la longueur d'une chaîne.

* **[Lien vers 3-factorial.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/3-factorial.c)** : Une fonction récursive qui calcule la factorielle d'un nombre.

* **[Lien vers 4-pow_recursion.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/4-pow_recursion.c)** : Une fonction récursive qui retourne la valeur de x élevée à la puissance y.

* **[Lien vers 5-sqrt_recursion.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/5-sqrt_recursion.c)** : Une fonction récursive qui retourne la racine carrée naturelle d'un nombre.

* **[Lien vers 6-is_prime_number.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/recursion/6-is_prime_number.c)** : Une fonction récursive qui détermine si un nombre est premier.




# 💡 Contraintes et Bonnes Pratiques
Ce projet adhère à des règles de codage strictes pour garantir la qualité du code et l'apprentissage de la récursivité pure :

Style Betty : Conformité aux normes de style Betty, vérifiée par betty-style.pl et betty-doc.pl.

Pas de variables globales : L'utilisation de variables globales est proscrite.

Modularité : Pas plus de 5 fonctions par fichier.

Interdiction de la Bibliothèque Standard : L'utilisation de fonctions comme printf, puts, etc., est formellement proscrite. Seule la fonction _putchar est autorisée pour l'affichage.

_putchar : Cette fonction est utilisée pour toutes les opérations d'affichage (le fichier _putchar.c n'est pas à pousser).

Include Guards : Le fichier d'en-tête main.h doit être protégé par des include guards.

Pas de boucles : Aucune boucle (for, while, do-while) n'est autorisée. Toutes les solutions doivent être purement récursives.

Pas de variables statiques : L'utilisation de variables statiques est interdite.

👨‍💻 Comment Compiler et Exécuter
Pour compiler les fichiers de ce projet, assure-toi d'avoir GCC installé sur un système Ubuntu 20.04 LTS.

Exemple de compilation et d'exécution (pour 0-puts_recursion.c) :
```bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-puts_recursion.c -o puts_recursion
./puts_recursion
# Résultat attendu : (dépend du 0-main.c de test)
```

# ✍️ Auteur
Mathieu GODALIER - Élève en programmation
