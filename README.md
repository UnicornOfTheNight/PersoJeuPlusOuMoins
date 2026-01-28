# 🔢 Perso Jeu Plus Ou Moins

![Language](https://img.shields.io/badge/Language-C-blue)
![License](https://img.shields.io/badge/License-MIT-green)
![Type](https://img.shields.io/badge/Type-Console%20Game-lightgrey)

Un projet personnel implémentant le célèbre jeu du **"Plus ou Moins"** (ou *Guess the Number*). Le but est de deviner un nombre aléatoire choisi par l'ordinateur en un minimum de coups.

## 🎮 Règles du Jeu

1.  L'ordinateur génère un nombre mystère entre **1 et 100**.
2.  Le joueur propose un nombre.
3.  Le programme donne un indice :
    * ➕ **"C'est plus !"** si le nombre mystère est plus grand.
    * ➖ **"C'est moins !"** si le nombre mystère est plus petit.
4.  Une fois trouvé, le jeu félicite le joueur et propose de rejouer.

## 🛠 Technologies Utilisées

* **Langage** : C (Standard C99 ou ANSI C)
* **Bibliothèques** :
    * `stdio.h` (Entrées/Sorties)
    * `stdlib.h` (Gestion mémoire et aléatoire)
    * `time.h` (Initialisation de la graine aléatoire)

## 🚀 Installation & Compilation

Pour lancer ce jeu, vous avez besoin d'un compilateur C comme **GCC** (inclus dans Linux/Mac ou via MinGW sur Windows).

1.  **Cloner le dépôt :**
    ```bash
    git clone [https://github.com/UnicornOfTheNight/PersoJeuPlusOuMoins.git](https://github.com/UnicornOfTheNight/PersoJeuPlusOuMoins.git)
    cd PersoJeuPlusOuMoins
    ```

2.  **Compiler le code source :**
    Ouvrez votre terminal et tapez :
    ```bash
    gcc main.c -o jeu
    ```
    *(Remplacez `main.c` par le nom réel de votre fichier si différent)*

3.  **Lancer le jeu :**
    * *Sur Linux / Mac :*
        ```bash
        ./jeu
        ```
    * *Sur Windows :*
        ```cmd
        jeu.exe
        ```

## 🧠 Exemple d'exécution

```text
Entrez un nombre compris entre 1 et 100 : 50
C'est plus !

Entrez un nombre compris entre 1 et 100 : 75
C'est moins !

Entrez un nombre compris entre 1 et 100 : 62
Bravo vous avez trouver le nombre mystere !

Voulez-vous rejouer ?
1 : Rejouer
2 : Quitter
