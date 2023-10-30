// main.c
#include "src/struct.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("Usage: %s <filename.txt>\n", argv[0]);
        return 1;
    }
    noeud * root;
    root = initArbre();
    TraiterFichier(root, argv[1]);
    resetNoeudCourant();
    supprimer(root);
    return EXIT_SUCCESS;
}
