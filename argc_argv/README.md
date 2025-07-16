🚀 Projet : Maîtrise des Arguments de la Fonction main() en C
Bienvenue dans ce projet dédié à la compréhension et à l'utilisation des arguments passés à la fonction main() en C ! Savoir manipuler argc et argv est fondamental pour écrire des programmes robustes qui peuvent interagir avec l'utilisateur ou d'autres scripts directement depuis la ligne de commande. Ce projet a consolidé ma capacité à créer des applications C plus flexibles.

🎯 Objectifs d'apprentissage
À la fin de ce projet, je dois être capable d'expliquer clairement, sans l'aide de ressources externes :

Comment utiliser les arguments passés à un programme C : Comprendre le rôle de argc et argv.

Les différents prototypes de main() : Connaître au moins deux prototypes courants et quand utiliser l'un ou l'autre.

Gérer les variables ou paramètres non utilisés : Utiliser __attribute__((unused)) ou (void) pour compiler proprement du code avec des variables intentionnellement non utilisées.

🛠️ Technologies et Environnement
Langage : C

Compilateur : GCC (GNU Compiler Collection)

Options de compilation : -Wall -Werror -Wextra -pedantic -std=gnu89

Environnement : Ubuntu 20.04 LTS

Éditeurs : vi, vim, emacs

📖 Structure du Projet
Ce dépôt contient les fichiers d'exercices suivants, chacun illustrant un aspect de la gestion des arguments de main :

main.h : Mon fichier d'en-tête, incluant les prototypes de toutes les fonctions du projet, y compris _putchar.

** [Lien vers 0-whatsmyname.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/argc_argv/0-whatsmyname.c)** : Un programme qui affiche son propre nom (le nom du programme).

** [Lien vers 1-args.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/argc_argv/1-args.c)** : Un programme qui affiche le nombre d'arguments qu'il reçoit.

** [Lien vers 2-args.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/argc_argv/2-args.c)** : Un programme qui affiche tous les arguments qu'il reçoit, un par ligne.

** [Lien vers 3-mul.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/argc_argv/3-mul.c)** : Un programme qui multiplie deux nombres passés en arguments.

** [Lien vers 4-add.c](https://github.com/Mathieu7483/holbertonschool-low_level_programming/blob/main/argc_argv/4-add.c)** : Un programme qui additionne des nombres positifs passés en arguments.

** [Lien vers 100-change.c]()** : Un programme qui calcule le rendu de monnaie minimal en pièces, à partir d'un montant donné.


💡 Contraintes et Bonnes Pratiques
Ce projet a été réalisé en respectant les exigences suivantes pour un code de haute qualité :

Style Betty : Respect strict des règles du style Betty, vérifié par les scripts betty-style.pl et betty-doc.pl.

Pas de variables globales : Aucune variable globale n'est utilisée.

Modularité : Le nombre de fonctions par fichier est limité à 5.

Bibliothèque Standard : L'utilisation de la bibliothèque standard C est autorisée (contrairement aux projets précédents où les fonctions étaient restreintes).

_putchar : La fonction _putchar est utilisée pour l'affichage.

👨‍💻 Comment compiler et exécuter
Pour compiler les fichiers de ce projet, assure-toi d'avoir GCC sur un système Ubuntu 20.04 LTS.

Exemple de compilation et d'exécution (pour le programme 3-mul.c) :

Bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul
./mul 10 20
# Résultat attendu : 200
./mul 5 "hello"
# Résultat attendu : Error
(Adapte les commandes pour chaque programme en fonction de ses arguments attendus.)

✍️ Auteur
Mathieu - Élève en programmation

Points clés de cette version :
Titre clair et descriptif : "Maîtrise des Arguments de la Fonction main() en C" est direct et montre l'objectif.

Introduction valorisante : Elle met en avant l'importance des arguments de main pour des programmes flexibles.

Objectifs reformulés : Présentés comme des questions, ils sont plus percutants et faciles à mémoriser.

Exemples d'utilisation concrets : J'ai ajouté des exemples d'exécution pour 3-mul.c qui montrent comment le programme est utilisé avec des arguments, et même des cas d'erreur. C'est très utile pour quelqu'un qui découvre ton code !

Mise en évidence de la bibliothèque standard : J'ai souligné que l'utilisation de la bibliothèque standard est autorisée pour ce projet, ce qui est une information importante par rapport aux projets précédents.
