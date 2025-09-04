<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/img/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

## 🎯 Aperçu des Objectifs d'Apprentissage

Ce dépôt vise à solidifier ma compréhension des concepts clés du C, me permettant d'expliquer sans effort :

* **Pourquoi le C est un langage essentiel** : Sa place et son rôle dans le monde de la programmation.
* **Les figures emblématiques du C** : Qui sont Dennis Ritchie, Brian Kernighan et Linus Torvalds.
* **Le processus de compilation** : Ce qui se passe lorsque l'on tape `gcc main.c`.
* **Points d'entrée et la fonction `main`** : Leur importance et leurs rôles.
* **Les bases de l'affichage** : Utiliser `printf`, `puts` et `putchar` pour interagir avec l'utilisateur.
* **Manipulation des types et opérateurs** : Découvrir `sizeof` pour la taille des types.
* **Compilation avancée** : Maîtriser `gcc`, le nom par défaut des exécutables et le style de codage **Betty**.
* **Inclusion d'en-têtes** : Savoir trouver les bons fichiers d'en-tête pour les fonctions de la bibliothèque standard.
* **Valeurs de retour des programmes** : L'influence de `main` sur le code de sortie d'un programme.

## 🛠️ Technologies et Environnement

* **Langage Principal** : C
* **Scripts** : Shell / Bash
* **Compilateur** : GCC (GNU Compiler Collection) sur Ubuntu 20.04 LTS
* **Options de compilation strictes** : `-Wall -Werror -Wextra -pedantic -std=gnu89`
* **Éditeurs de Code** : `vi`, `vim`, `emacs`
* **Style de Codage** : Betty (vérifié par `betty-style.pl` et `betty-doc.pl`)

---

## 📂 Structure du Dépôt et Projets

Ce dépôt est une collection de divers projets, chacun dans son propre dossier. Chaque dossier de projet contient un `README.md` spécifique détaillant ses propres objectifs et exercices. Voici un aperçu des principaux projets inclus :

* **[Lien vers hello_world](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/hello_world)** : Introduction aux bases du C (compilation, affichage, etc.).
* **[Lien vers variables_if_else_while](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/variables_if_else_while)** : Exploration des variables, conditions et boucles.
* **[Lien vers functions_nested_loops](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/functions_nested_loops)** : Fonctions et boucles imbriquées.
* **[Lien vers more_functions_nested_loops](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/more_functions_nested_loops)** : Fonctions supplémentaires et boucles complexes.
* **[Lien vers pointers_arrays_strings](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/pointers_arrays_strings)** : Maîtrise des pointeurs, tableaux et chaînes de caractères.
* **[Lien vers recursion](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/recursion)** : Comprendre et appliquer la récursivité.
* **[Lien vers argc_argv](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/argc_argv)** : Gestion des arguments de la ligne de commande (`argc`, `argv`).
* **[Lien vers malloc free](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/malloc_free)** : Comprendre Malloc, Calloc et Realloc.
* **[Lien vers more malloc free](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/more_malloc_free)** : Fonctions suplémentaires et Malloc plus complexe.
* **[Lien vers structure typedef](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/structures_typedef)** : Comprendre les structures, a quoi sert typedef.
* **[Lien vers variadic functions](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/variadic_functions)** : Création et utilisation des fonctions variadiques.
* **[Lien vers function pointers](https://github.com/Mathieu7483/holbertonschool-low_level_programming/tree/main/function_pointers)** : Utilisation et comprehension des pointers de fonctions.

---

## ⚙️ Exigences Générales des Projets

Tous les projets de ce dépôt suivent un ensemble commun de règles :

* **Éditeurs Autorisés** : `vi`, `vim`, `emacs`.
* **Environnement de Compilation** : Ubuntu 20.04 LTS avec `gcc`.
* **Options de Compilation** : `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* **Fin de Fichier** : Tous les fichiers doivent se terminer par une nouvelle ligne.
* **Documentation** : Un fichier `README.md` est requis à la racine de chaque dossier de projet.
* **Qualité du Code** : Pas d'erreurs ni d'avertissements à la compilation.
* **Restrictions** : Pas de variables globales, pas plus de 5 fonctions par fichier (sauf indication contraire), et **l'utilisation de `system()` est interdite**.
* **Shell Scripts** : Si des scripts shell sont présents, ils doivent être de 2 lignes exactes, se terminer par une nouvelle ligne, et commencer par `#!/bin/bash`.

---

## 🧹 Outil de Style : Betty Linter

Le respect du style de code **Betty** est primordial. Pour faciliter cette vérification :

1.  **Cloner le dépôt Betty** : `git clone https://github.com/holbertonschool/Betty.git`
2.  **Se déplacer dans le répertoire** : `cd Betty`
3.  **Installer le linter** : `sudo ./install.sh`
4.  **Créer le script `betty` (wrapper)** : Créez un fichier nommé `betty` et copiez-y le contenu suivant :
    ```bash
    #!/bin/bash
    # Simply a wrapper script to keep you from having to use betty-style
    # and betty-doc separately on every item.
    # Originally by Tim Britton (@wintermanc3r), multiargument added by
    # Larry Madeo (@hillmonkey)

    BIN_PATH="/usr/local/bin"
    BETTY_STYLE="betty-style"
    BETTY_DOC="betty-doc"

    if [ "$#" = "0" ]; then
        echo "No arguments passed."
        exit 1
    fi

    for argument in "$@" ; do
        echo -e "\n========== $argument =========="
        ${BIN_PATH}/${BETTY_STYLE} "$argument"
        ${BIN_PATH}/${BETTY_DOC} "$argument"
    done
    ```
5.  **Rendre le script exécutable** : `chmod a+x betty`
6.  **Déplacer le script dans le PATH** : `sudo mv betty /bin/` (ou un autre répertoire de votre `$PATH`).

Vous pouvez maintenant exécuter `betty votre_fichier.c` pour vérifier la conformité au style Betty !

---

# ✍️ Auteur
Mathieu GODALIER- Élève en programmation à la Holberton School
