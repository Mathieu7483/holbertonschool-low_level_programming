<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.# 🔗 Projet : Les Listes Chaînées en C
Ce projet explore l'implémentation et la manipulation des listes chaînées simples en C. Il vise à solidifier la compréhension de cette structure de données fondamentale, de son utilité et de sa mise en œuvre, en respectant un ensemble de contraintes de développement strictes.

# 📖 Table des Matières
[Contexte et Objectifs du Projet](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#-contexte-et-objectifs-du-projet)

[Ressources et Apprentissages Clés](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#-ressources-et-apprentissages-cl%C3%A9s)

[Exigences Générales](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#-exigences-g%C3%A9n%C3%A9rales)

[Structure de Données Utilisée](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#-structure-de-donn%C3%A9es-utilis%C3%A9e)

[Utilisation](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#-utilisation)

[Compilation](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#%EF%B8%8F-compilation)

[Auteur](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/singly_linked_lists#%EF%B8%8F-auteur)

# 💡 Contexte et Objectifs du Projet
Les listes chaînées sont une pierre angulaire des structures de données en programmation. Ce projet met l'accent sur la création et la manipulation de ces listes, avec pour objectifs principaux :

Comprendre la différence : Savoir quand et pourquoi préférer les listes chaînées aux tableaux pour des cas d'utilisation spécifiques.

Maîtriser la construction : Apprendre à bâtir des listes chaînées de A à Z.

Manipuler efficacement : Développer des fonctions pour ajouter, supprimer, parcourir et gérer les nœuds d'une liste.

L'objectif ultime est de pouvoir expliquer ces concepts à n'importe qui, sans l'aide de ressources externes, prouvant ainsi une compréhension profonde et autonome.

# 📚 Ressources et Apprentissages Clés
Pour mener à bien ce projet, les ressources suivantes ont été consultées et les concepts étudiés :

Listes Chaînées : Étude approfondie des principes, des avantages et des inconvénients des listes chaînées.

Google et YouTube : Utilisation de ces plateformes pour la recherche et la clarification de concepts spécifiques.

Gestion de la Mémoire : Pratique de malloc et free pour une allocation et une libération dynamique et responsable de la mémoire.

Pointeurs et Structures : Renforcement des compétences en manipulation des pointeurs et des structures en C.

# ✅ Exigences Générales
Ce projet est soumis aux exigences suivantes pour garantir la qualité et la conformité du code :

Éditeurs Autorisés : vi, vim, emacs.

Environnement de Compilation : Ubuntu 20.04 LTS.

Compilateur C : gcc, avec les options strictes -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Fichier README.md : Obligatoire à la racine du dépôt.

Style de Code : Strict respect du style Betty, vérifié par betty-style.pl et betty-doc.pl.

Variables Globales : Interdites.

Nombre de Fonctions par Fichier : Maximum 5 fonctions par fichier.

Fonctions C Standard Autorisées : malloc, free, exit. Toutes les autres fonctions comme printf, puts, calloc, realloc, etc., sont interdites.

Fonction _putchar : Autorisée pour l'affichage. Le fichier _putchar.c n'a pas besoin d'être poussé.

Fichiers main.c : Les fichiers main.c utilisés pour les tests ne doivent pas être poussés dans le dépôt principal. Nous utiliserons nos propres fichiers main.c pour la compilation.

Fichier d'En-tête (lists.h) : Doit inclure les prototypes de toutes les fonctions du projet, ainsi que le prototype de _putchar. Il doit être protégé contre les inclusions multiples (include guarded).

# 📝 Structure de Données Utilisée
Pour ce projet, la structure de liste chaînée simple suivante est employée :

```C

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```
* [Lien vers lists.h](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/singly_linked_lists/lists.h)
* [Lien vers 0-print_list.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/singly_linked_lists/0-print_list.c)
* [Lien vers 1-list_len.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)
* [Lien vers 2-add_node.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/singly_linked_lists/2-add_node.c)
* [Lien vers 3-add_node_end.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/singly_linked_lists/3-add_node_end.c)
* [Lien vers 4-free_list.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/singly_linked_lists/4-free_list.c)



# 💻 Utilisation
Ce projet met en œuvre diverses fonctions pour manipuler la structure list_t. Ces fonctions peuvent être utilisées pour construire, parcourir, et modifier des listes chaînées.

Exemple (les main.c de test ne sont pas inclus dans le dépôt) :

```C

#include "lists.h" // Votre fichier d'en-tête

int main(void)
{
    list_t *head;

    head = NULL; // Initialiser la liste vide
    
    // Exemple d'ajout de nœuds (fonction non montrée ici, mais à implémenter)
    // add_node(&head, "Holberton");
    // add_node(&head, "School");
    // print_list(head); // Afficher la liste

    // ... et d'autres fonctions comme suppression, recherche, etc.

    // Libérer la mémoire
    // free_list(head); 
    
    return (0);
}
```

# ⚙️ Compilation
Votre code sera compilé avec les options gcc spécifiées :

```Bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o ./lettre de l'exercice
```

Verification des fuites de mémoire à l'aide de la commande
```Bash
valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
[Mathieu GODALIER](https://github.com/Mathieu7483) - Elève en programmation à la Holberton School
