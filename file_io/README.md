<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

# 💾 Projet : Manipulation de Fichiers (File I/O) en C
Ce projet explore les opérations d'entrée/sortie (I/O) de fichiers de bas niveau en C, en utilisant les appels système POSIX. Il vise à fournir une compréhension approfondie des descripteurs de fichiers, des permissions et des méthodes fondamentales pour interagir avec le système de fichiers.

# 📖 Table des Matières
[Contexte et Objectifs du Projet](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/file_io#-contexte-et-objectifs-du-projet)

[Ressources et Apprentissages Clés](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/file_io#-ressources-et-apprentissages-cl%C3%A9s)

[Exigences Générales](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/file_io#-exigences-g%C3%A9n%C3%A9rales)

[Concepts Abordés](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/file_io#-concepts-abord%C3%A9s)

[Tâches Réalisées](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/file_io/README.md#-t%C3%A2ches-r%C3%A9alis%C3%A9es)

[Compilation](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/file_io#%EF%B8%8F-compilation)

[Auteur](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/file_io#%EF%B8%8F-auteur)

# 💡 Contexte et Objectifs du Projet
Dans le développement système, comprendre comment un programme interagit avec les fichiers est essentiel. Ce projet se concentre sur les appels système (syscalls) open, close, read, et write, qui sont les fondations de toute interaction avec les fichiers sous les systèmes d'exploitation de type Unix/Linux.

Les objectifs d'apprentissage sont les suivants :

Recherche d'informations : Développer l'autonomie pour trouver les bonnes sources d'information en ligne.

Opérations de fichiers : Maîtriser la création, l'ouverture, la fermeture, la lecture et l'écriture de fichiers.

Descripteurs de fichiers : Comprendre ce que sont les descripteurs de fichiers et leur rôle.

Descripteurs standard : Identifier les 3 descripteurs de fichiers standard (STDIN, STDOUT, STDERR) et leurs noms POSIX.

Appels système I/O : Savoir utiliser open, close, read et write.

Drapeaux d'ouverture : Comprendre et utiliser les drapeaux O_RDONLY, O_WRONLY, O_RDWR.

Permissions de fichier : Apprendre à définir les permissions lors de la création d'un fichier avec open.

Appels système vs Fonctions : Saisir la différence fondamentale entre une fonction de bibliothèque C et un appel système.

# 📚 Ressources et Apprentissages Clés
Ce projet s'appuie sur les ressources suivantes pour une compréhension approfondie :

Descripteurs de Fichiers : Concept central pour l'interaction avec le système d'exploitation.

Appels Système I/O : Comment utiliser open, close, read et write pour manipuler des fichiers.

Tutoriels C en Linux : Exploration de l'utilisation pratique de ces fonctions.

Pages man : Utilisation intensive de la documentation (man open, man close, man read, man write, man dprintf).

# ✅ Exigences Générales
Les exigences strictes suivantes ont été appliquées pour ce projet :

Éditeurs Autorisés : vi, vim, emacs.

Environnement de Compilation : Ubuntu 20.04 LTS.

Compilateur C : gcc, avec les options -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Fichier README.md : Obligatoire à la racine du dépôt.

Style de Code : Strict respect du style Betty, vérifié par betty-style.pl et betty-doc.pl.

Variables Globales : Interdites.

Nombre de Fonctions par Fichier : Maximum 5 fonctions par fichier.

Fonctions C Standard Autorisées : malloc, free, et exit. Les fonctions de la bibliothèque standard comme printf, puts, calloc, realloc sont interdites (sauf dprintf pour la tâche 3).

Appels Système Autorisés : read, write, open, close.

Fonction _putchar : Autorisée pour l'affichage (le fichier _putchar.c n'a pas besoin d'être poussé).

Fichiers main.c : Les fichiers main.c utilisés pour les tests ne doivent pas être poussés dans le dépôt principal. Nos propres fichiers main.c seront utilisés pour la compilation.

Fichier d'En-tête (main.h) : Doit inclure les prototypes de toutes les fonctions du projet, y compris _putchar. Il doit être protégé contre les inclusions multiples (include guarded).

Bonne Pratique : Privilégier l'utilisation de constantes symboliques (POSIX) plutôt que des nombres pour les descripteurs de fichiers (ex: STDIN_FILENO vs 0).

# 📋 Concepts Abordés
Ce projet a permis d'acquérir une connaissance pratique sur :

Descripteur de fichier : Un entier non négatif qui représente un accès à un fichier ouvert.

Appel système : Une interface entre le programme utilisateur et le noyau du système d'exploitation.

open() : Ouvre ou crée un fichier, et retourne son descripteur de fichier.

close() : Ferme un descripteur de fichier, libérant les ressources.

read() : Lit des données depuis un descripteur de fichier.

write() : Écrit des données vers un descripteur de fichier.

dprintf() : Fonction similaire à printf mais écrivant sur un descripteur de fichier spécifique (utilisée dans la tâche 3).

Permissions de fichier : Contrôle l'accès au fichier (lecture, écriture, exécution).

Drapeaux d'ouverture : O_RDONLY (lecture seule), O_WRONLY (écriture seule), O_RDWR (lecture/écriture), O_CREAT (créer le fichier s'il n'existe pas), O_TRUNC (tronquer le fichier s'il existe), O_APPEND (ajouter à la fin du fichier).

Descripteurs standard POSIX :

STDIN_FILENO (0) : Entrée standard.

STDOUT_FILENO (1) : Sortie standard.

STDERR_FILENO (2) : Erreur standard.

# 🚀 Tâches Réalisées
Ce projet comprend plusieurs tâches, chacune mettant en œuvre des aspects spécifiques de l'I/O de fichiers :

0. Tread lightly, she is near
Objectif : Lire le contenu d'un fichier texte et l'afficher sur la sortie standard POSIX.

Prototype : ssize_t read_textfile(const char *filename, size_t letters);

Retour : Le nombre réel de caractères lus et imprimés, ou 0 en cas d'échec ou d'entrée invalide.

Fichier : [0-read_textfile.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/file_io/0-read_textfile.c)

1. Under the snow
Objectif : Créer un fichier et y écrire du contenu.

Prototype : int create_file(const char *filename, char *text_content);

Permissions : Le fichier créé doit avoir les permissions rw-------. S'il existe déjà, le tronquer et ne pas modifier les permissions.

Retour : 1 en cas de succès, -1 en cas d'échec.

Fichier : [1-create_file.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/file_io/1-create_file.c)

2. Speak gently, she can hear
Objectif : Ajouter du texte à la fin d'un fichier existant.

Prototype : int append_text_to_file(const char *filename, char *text_content);

Comportement : Ne crée pas le fichier s'il n'existe pas.

Retour : 1 en cas de succès, -1 en cas d'échec.

Fichier : [2-append_text_to_file.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/file_io/2-append_text_to_file.c)

3. cp
Objectif : Écrire un programme qui copie le contenu d'un fichier source vers un fichier de destination.

Usage : cp file_from file_to

Gestion d'erreurs : Gère les erreurs de lecture, d'écriture et de fermeture avec des codes de sortie spécifiques et des messages d'erreur sur l'erreur standard.

Performances : Lit par blocs de 1024 octets pour minimiser les appels système.

Permissions : Le fichier de destination créé aura les permissions rw-rw-r--.

Fichier : [3-cp.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/file_io/3-cp.c)

# ⚙️ Compilation
Les fichiers de ce projet seront compilés à l'aide de gcc avec les options suivantes :

```Bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_file_io_program
```

Verification des fuites de mémoire à l'aide de la commande
```Bash
valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
[Mathieu GODALIER](https://github.com/Mathieu7483) - Elève en programmation à la Holberton School
