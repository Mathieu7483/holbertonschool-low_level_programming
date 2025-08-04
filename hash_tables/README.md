<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

# 📖 Projet : Les Tables de Hachage en C
Ce projet consiste à implémenter une table de hachage en C, une structure de données essentielle pour stocker des paires clé/valeur de manière efficace. Il s'agit de comprendre les concepts fondamentaux tels que les fonctions de hachage, les collisions, et la gestion de la mémoire.

# 📖 Table des Matières
[Contexte et Objectifs du Projet](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#-contexte-et-objectifs-du-projet)

[Ressources et Apprentissages Clés](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#-ressources-et-apprentissages-cl%C3%A9s)

[Exigences Générales](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#-exigences-g%C3%A9n%C3%A9rales)

[Structures de Données Utilisées](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#-structures-de-donn%C3%A9es-utilis%C3%A9es)

[Tâches Réalisées](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#-t%C3%A2ches-r%C3%A9alis%C3%A9es)

[Compilation](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#%EF%B8%8F-compilation)

[Auteur](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hash_tables#%EF%B8%8F-auteur)

# 💡 Contexte et Objectifs du Projet
Les tables de hachage sont utilisées partout, des bases de données aux caches web. Ce projet vise à démystifier leur fonctionnement en te challengeant de créer ta propre implémentation. Les objectifs d'apprentissage sont les suivants :

Fonction de Hachage : Comprendre ce qu'est une fonction de hachage et ce qui la rend efficace.

Table de Hachage : Saisir le fonctionnement interne d'une table de hachage et son utilisation.

Collisions : Identifier les collisions et les principales stratégies pour les gérer (le chaînage pour ce projet).

Avantages et Inconvénients : Connaître les forces et les faiblesses des tables de hachage par rapport à d'autres structures de données.

Cas d'Utilisation : Reconnaître les scénarios où les tables de hachage sont la meilleure solution.

L'objectif final est de pouvoir expliquer ces concepts de manière claire et concise.

# 📚 Ressources et Apprentissages Clés
Les concepts suivants ont été étudiés pour ce projet :

Tables de Hachage : Introduction aux tables de hachage et à leur fonctionnement.

Fonctions de hachage : Le rôle de l'algorithme djb2.

Gestion des collisions : Implémentation du chaînage pour résoudre les collisions.

Pages man : Utilisation de la documentation officielle pour les fonctions de la bibliothèque standard C autorisées.

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

Bibliothèque Standard C : L'utilisation est autorisée.

Fichiers main.c : Les fichiers de test ne doivent pas être poussés dans le dépôt.

Fichier d'En-tête (hash_tables.h) : Doit inclure les prototypes de toutes les fonctions du projet et être protégé contre les inclusions multiples (include guarded).

# 📝 Structures de Données Utilisées
Pour ce projet, les deux structures suivantes sont utilisées pour construire la table de hachage avec gestion des collisions par chaînage :

```C

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
Fichier : [hash_tables.h](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/hash_tables.h)

# 🚀 Tâches Réalisées
Ce projet est divisé en plusieurs tâches, chacune construisant sur la précédente pour créer une table de hachage fonctionnelle.

0. ht = {}
Objectif : Créer une table de hachage.

Prototype : hash_table_t *hash_table_create(unsigned long int size);

Retour : Un pointeur vers la nouvelle table de hachage, ou NULL en cas d'échec.

Fichier : [0-hash_table_create.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/0-hash_table_create.c)

1. djb2
Objectif : Implémenter la fonction de hachage djb2. (le code est donné dans l'ennoncé via un lien)

Prototype : unsigned long int hash_djb2(const unsigned char *str);

Retour : La valeur de hachage générée.

Fichier : [1-djb2.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/1-djb2.c)

2. key -> index
Objectif : Calculer l'index d'une clé dans le tableau de la table de hachage.

Prototype : unsigned long int key_index(const unsigned char *key, unsigned long int size);

Retour : L'index où la paire clé/valeur doit être stockée.

Fichier : [2-key_index.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/2-key_index.c)

3. ht['betty'] = 'cool'
Objectif : Ajouter un élément à la table de hachage.

Prototype : int hash_table_set(hash_table_t *ht, const char *key, const char *value);

Retour : 1 en cas de succès, 0 en cas d'échec. Gère les collisions en ajoutant le nouveau nœud au début de la liste.

Fichier : [3-hash_table_set.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/3-hash_table_set.c)

4. ht['betty']
Objectif : Récupérer une valeur à partir de sa clé.

Prototype : char *hash_table_get(const hash_table_t *ht, const char *key);

Retour : La valeur associée à la clé, ou NULL si la clé n'est pas trouvée.

Fichier : [4-hash_table_get.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/4-hash_table_get.c)

5. print(ht)
Objectif : Afficher le contenu de la table de hachage.

Prototype : void hash_table_print(const hash_table_t *ht);

Affichage : Imprime les paires clé/valeur dans l'ordre du tableau, puis de la liste, en respectant un format spécifique.

Fichier : [5-hash_table_print.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/5-hash_table_print.c)

6. del ht
Objectif : Libérer la mémoire d'une table de hachage.

Prototype : void hash_table_delete(hash_table_t *ht);

Fichier : [6-hash_table_delete.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/hash_tables/6-hash_table_delete.c)

# ⚙️ Compilation
Votre code sera compilé avec les options gcc spécifiées :

```Bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_hash_tables
```

Verification des fuites de mémoire à l'aide de la commande
```Bash
valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
[Mathieu GODALIER](https://github.com/Mathieu7483) - Elève en programmation à la Holberton School
