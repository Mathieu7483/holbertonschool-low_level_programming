# 🎯 Projet : Maîtrise des Pointeur de Fonctions en C

Bienvenue dans ce projet fondamental qui plonge au cœur des **pointeurs de fonctions** en C ! C'est une étape cruciale pour comprendre des concepts plus avancés comme les callbacks ou l'implémentation de tables de fonctions. Ce travail m'a permis d'acquérir une compréhension solide de la manipulation des fonctions comme des données.

## 🚀 Objectifs d'apprentissage

Ce projet a pour but de répondre aux questions clés et de me permettre d'expliquer à quiconque, sans aide extérieure :

* **Qu'est-ce qu'un pointeur de fonction et comment l'utiliser ?** Comprendre leur syntaxe et leur utilité pratique.
* **Que contient exactement un pointeur de fonction ?** Découvrir ce qu'il stocke en mémoire.
* **Où un pointeur de fonction pointe-t-il dans la mémoire virtuelle ?** Visualiser leur place dans l'architecture mémoire d'un programme.

## 🛠️ Technologies et Environnement

* **Langage** : C
* **Compilateur** : GCC (GNU Compiler Collection)
* **Options de compilation** : `-Wall -Werror -Wextra -pedantic -std=gnu89`
* **Environnement** : Ubuntu 20.04 LTS
* **Éditeurs** : `vi`, `vim`, `emacs`

## 📖 Structure du Projet

Ce dépôt est organisé pour explorer différentes facettes des pointeurs de fonctions :

* `function_pointers.h` : Mon fichier d'en-tête, incluant les prototypes de toutes les fonctions.
* **[Lien vers 0-print_name.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/0-print_name.c)** : Une fonction simple qui utilise un pointeur de fonction pour imprimer un nom.
* **[Lien vers 1-array_iterator.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/1-array_iterator.c)** : Une fonction qui exécute une fonction donnée sur chaque élément d'un tableau.
* **[Lien vers 2-int_index.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/2-int_index.c)** : Une fonction qui recherche un entier dans un tableau en utilisant une fonction de comparaison.
* **[Lien vers 3-op_functions.c et 3-get_op_func.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/3-op_functions.c)(https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/3-get_op_func.c)** : Implémentation d'un calculateur simple avec des pointeurs de fonctions pour les opérations.
* **[Lien vers 3-main.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/3-main.c)** : Exemple d'utilisation du calculateur.
* **[Lien vers 3-calc.h](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/function_pointers/3-calc.h)** : fichier d'en-tête pour l'exercice 3.

*(N'oublie pas de remplacer les `[Lien vers ...]` par les chemins relatifs vers tes fichiers dans ton dépôt GitHub, comme ceci : `[0-print_name.c](./0-print_name.c)`. Si tu veux un lien direct cliquable sur GitHub, utilise l'URL complète du fichier, par exemple : `[0-print_name.c](https://github.com/TonNomUtilisateur/TonRepo/blob/main/0-print_name.c)`.)*

## 💡 Contraintes et Bonnes Pratiques

Ce projet a été développé en suivant des règles strictes pour garantir un code propre et efficace :

* **Style Betty** : Conformité aux normes de style Betty, vérifiée par `betty-style.pl` et `betty-doc.pl`.
* **Gestion de la mémoire** : Seules les fonctions `malloc`, `free` et `exit` sont autorisées pour la gestion dynamique de la mémoire.
* **Pas de variables globales** : L'utilisation de variables globales est proscrite.
* **Modularité** : Pas plus de 5 fonctions par fichier.
* **`_putchar`** : Utilisation de la fonction `_putchar` pour l'affichage.
* **Include Guards** : Tous les fichiers d'en-tête sont protégés contre les inclusions multiples.

## 👨‍💻 Comment compiler et exécuter

Pour compiler les sources de ce projet, assure-toi d'avoir GCC sur un système Ubuntu 20.04 LTS.

Exemple de compilation (pour le fichier `0-print_name.c` avec un `main.c` de test) :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-print_name.c -o print_name
./print_name
