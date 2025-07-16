📊 Projet : Variables, Conditions (if/else) et Boucles (while) en C
Bienvenue dans ce projet initial qui plonge dans les éléments fondamentaux de la programmation en C : les variables, les opérateurs, les conditions (if/else) et les boucles (while) ! C'est le point de départ pour écrire des programmes capables de prendre des décisions et de répéter des actions. J'ai acquis ici une compréhension solide des briques de base de tout algorithme.

🎯 Objectifs d'Apprentissage
À la fin de ce projet, je suis capable d'expliquer à quiconque, sans l'aide de ressources externes :

Les opérateurs arithmétiques : Comment les utiliser pour les calculs.

Les opérateurs logiques (booléens) : Comment les utiliser pour combiner des conditions.

Les opérateurs relationnels : Comment les utiliser pour comparer des valeurs.

Les valeurs considérées comme VRAI et FAUX en C.

L'utilisation des instructions if et if...else pour la prise de décision.

Comment ajouter des commentaires dans le code C.

La déclaration et l'affectation de variables de types char, int, unsigned int.

L'affichage des valeurs de variables avec printf.

L'utilisation de la boucle while et son interaction avec les variables.

Le jeu de caractères ASCII et son importance.

Le rôle des flags gcc -m32 et -m64 lors de la compilation.

🛠️ Technologies et Environnement
Langage : C

Compilateur : GCC (GNU Compiler Collection)

Options de compilation : -Wall -Werror -Wextra -pedantic -std=gnu89

Environnement : Ubuntu 20.04 LTS

Éditeurs : vi, vim, emacs

📖 Structure du Projet et Exercices
Ce dépôt contient une série d'exercices pratiques conçus pour explorer ces concepts fondamentaux.

* **[Lien vers 0-positive_or_negative.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/0-positive_or_negative.c)** : Un programme qui assigne un nombre aléatoire à une variable et indique si ce nombre est positif, négatif ou zéro.

* **[Lien vers 1-last_digit.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/1-last_digit.c)** : Un programme qui assigne un nombre aléatoire à une variable et affiche son dernier chiffre, avec un message spécifique en fonction de sa valeur.

* **[Lien vers 2-print_alphabet.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/2-print_alphabet.c)** : Un programme qui imprime l'alphabet en minuscules, suivi d'une nouvelle ligne.

* **[Lien vers 3-print_alphabets.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/3-print_alphabets.c)** : Un programme qui imprime l'alphabet en minuscules, puis en majuscules, suivi d'une nouvelle ligne.

* **[Lien vers 4-print_alphabt.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/4-print_alphabt.c)** : Un programme qui imprime l'alphabet en minuscules, à l'exception des lettres 'q' et 'e'.

* **[Lien vers 5-print_numbers.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/5-print_numbers.c)** : Un programme qui imprime tous les chiffres de 0 à 9.

* **[Lien vers 6-print_numberz.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/6-print_numberz.c)** : Un programme qui imprime tous les chiffres de 0 à 9 sans utiliser de variable de type char.

* **[Lien vers 7-print_tebahpla.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/7-print_tebahpla.c)** : Un programme qui imprime l'alphabet en minuscules et en ordre inverse.

* **[Lien vers 8-print_base16.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/8-print_base16.c)** : Un programme qui imprime tous les nombres de base 16 en minuscules.

* **[Lien vers 9-print_comb.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/9-print_comb.c)** : Un programme qui imprime toutes les combinaisons possibles de chiffres simples.

* **[Lien vers 100-print_comb3.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/100-print_comb3.c)** : Un programme qui imprime toutes les combinaisons possibles de deux chiffres différents.

* **[Lien vers 101-print_comb4.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/101-print_comb4.c)** : Un programme qui imprime toutes les combinaisons possibles de trois chiffres différents.

* **[Lien vers 102-print_comb5.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/variables_if_else_while/102-print_comb5.c)** : Un programme qui imprime toutes les combinaisons possibles de deux nombres à deux chiffres.



💡 Contraintes et Bonnes Pratiques
Ce projet adhère à des règles de codage strictes pour garantir la qualité et la conformité :

Éditeurs Autorisés : vi, vim, emacs.

Compilation : Tous les fichiers sont compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Documentation : Un fichier README.md est obligatoire à la racine du dossier du projet.

Qualité du Code : Aucune erreur ni avertissement pendant la compilation.

Restrictions : L'utilisation de la fonction system() est interdite.

Style Betty : Le code doit respecter le style Betty, vérifié par betty-style.pl et betty-doc.pl.

Pas de boucles for ou do...while, ni de fonctions personnalisées (sauf indication contraire).

Pas de scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX.

👨‍💻 Comment Compiler et Exécuter
Pour compiler les fichiers de ce projet, assure-toi d'avoir GCC installé sur un système Ubuntu 20.04 LTS.

Exemple de compilation et d'exécution (pour 0-positive_or_negative.c) :

Bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o positive_or_negative
./positive_or_negative
# Le résultat dépendra du nombre aléatoire généré.
(Adapte les commandes de compilation et d'exécution en fonction de chaque exercice.)

✍️ Auteur
Mathieu GODALIER - Élève en programmation
