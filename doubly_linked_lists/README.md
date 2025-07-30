<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.# 🔗 Projet : Les Listes Chaînées en C
Ce projet explore l'implémentation et la manipulation des listes chaînées simples en C. Il vise à solidifier la compréhension de cette structure de données fondamentale, de son utilité et de sa mise en œuvre, en respectant un ensemble de contraintes de développement strictes.

# 🔁 Projet : Les Listes Doublement Chaînées en C
Ce projet se concentre sur l'implémentation et la manipulation des listes doublement chaînées en C. Il vise à approfondir la compréhension des structures de données dynamiques, en explorant les particularités et les avantages des listes où chaque nœud pointe à la fois vers le suivant et le précédent.

# 📖 Table des Matières
[Contexte et Objectifs du Projet](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#-contexte-et-objectifs-du-projet)

[Ressources et Apprentissages Clés](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#-ressources-et-apprentissages-cl%C3%A9s)

[Exigences Générales](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#-exigences-g%C3%A9n%C3%A9rales)

[Structure de Données Utilisée](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#-structure-de-donn%C3%A9es-utilis%C3%A9e)

[Utilisation](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#-utilisation)

[Compilation](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#%EF%B8%8F-compilation)

[Auteur](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/doubly_linked_lists#%EF%B8%8F-auteur)

# 💡 Contexte et Objectifs du Projet
Après avoir exploré les listes chaînées simples, ce projet introduit les listes doublement chaînées, qui offrent une plus grande flexibilité pour la navigation (avant et arrière). Les objectifs clés sont :

Comprendre ce qu'est une liste doublement chaînée : Saisir la structure et les concepts fondamentaux derrière cette variante de liste.

Maîtriser son utilisation : Développer des fonctions pour insérer, supprimer et parcourir les nœuds dans les deux directions.

Autonomie de recherche : Apprendre à identifier et utiliser les bonnes sources d'information pour résoudre les problèmes.

L'objectif final est de pouvoir expliquer clairement le fonctionnement et l'utilité des listes doublement chaînées sans assistance externe, démontrant ainsi une maîtrise solide du sujet.

# 📚 Ressources et Apprentissages Clés
Pour ce projet, les ressources suivantes ont été étudiées pour construire une compréhension solide :

Qu'est-ce qu'une Liste Doublement Chaînée : Étude des fondamentaux de cette structure de données.

Recherche autonome : Utilisation de ressources comme Google et d'autres supports en ligne pour approfondir les concepts et résoudre les problèmes spécifiques.

Gestion de la Mémoire : Perfectionnement de l'utilisation de malloc et free pour une gestion efficace de la mémoire dans des structures plus complexes.

Manipulation des Pointeurs Doubles : Maîtrise des pointeurs prev et next et de leurs implications pour les opérations sur la liste.

# ✅ Exigences Générales
Ce projet est soumis aux exigences rigoureuses suivantes pour garantir un code de haute qualité :

Éditeurs Autorisés : vi, vim, emacs.

Environnement de Compilation/Interprétation : Ubuntu 20.04 LTS.

Langage de Compilation : C, avec gcc et les options strictes -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Fichier README.md : Obligatoire à la racine du dépôt.

Style de Code : Strict respect du style Betty, vérifié par betty-style.pl et betty-doc.pl.

Variables Globales : Interdites.

Nombre de Fonctions par Fichier : Maximum 5 fonctions par fichier.

Fonctions C Standard Autorisées : malloc, free, printf, et exit.

Fichiers main.c : Les fichiers main.c utilisés pour les tests ne doivent pas être poussés dans le dépôt principal. Nos propres fichiers main.c seront utilisés pour la compilation.

Fichier d'En-tête (lists.h) : Doit inclure les prototypes de toutes les fonctions du projet. Il doit être protégé contre les inclusions multiples (include guarded).

# 📝 Structure de Données Utilisée
Pour ce projet, la structure de liste doublement chaînée suivante est employée :

```C

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
Chaque nœud de la liste (dlistint_t) contient un entier (n), un pointeur (prev) vers le nœud précédent, et un pointeur (next) vers le nœud suivant.
````

# 💻 Utilisation
Ce projet comprendra des fonctions pour manipuler la structure dlistint_t, permettant des opérations telles que :

* [Lien vers 0-print_dlistint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/0-print_dlistint.c) : Afficher les élements d'une liste

* [Lien vers 1-dlistint_len.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/1-dlistint_len.c) : Compter les éléments d'une liste

* [Lien vers 2-add_dnodeint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/2-add_dnodeint.c) : Ajouter un nœud au début

* [Lien vers 3-add_dnodeint_end.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/3-add_dnodeint_end.c) : Ajouter un nœud à la fin

* [Lien vers 4-free_dlistint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/4-free_dlistint.c) : Libérer la mémoire d'une liste

* [Lien vers 5-get_dnodeint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/5-get_dnodeint.c) : Récupérer un nœud à un index spécifique

* [Lien vers 6-sum_dlistint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/6-sum_dlistint.c) : Calculer la somme des données des nœuds

* [Lien vers 7-insert_dnodeint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/7-insert_dnodeint.c) :Insérer un nœud à une position donnée

* [Lien vers 8-delete_dnodeint.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/8-delete_dnodeint.c) : Supprimer un nœud à un index spécifique

* [Lien vers lists.h](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/lists.h) : Ce fichier a pour but de déclarer les structures de données et les prototypes de fonctions qui sont utilisées par plusieurs fichiers .c de ce projet.

# ⚙️ Compilation
Votre code sera compilé avec les options gcc spécifiées :

```Bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_doubly_linked_lists
```

Verification des fuites de mémoire à l'aide de la commande
```Bash
valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
[Mathieu GODALIER](https://github.com/Mathieu7483) Elève en programmation à la Holberton School.
