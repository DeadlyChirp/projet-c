# Simulation d'un Système de Fichiers en Arborescence

## Structure de données
Le but de ce projet est de développer un programme qui simule les instructions système de manipulation de l’arborescence des dossiers/fichiers. Le programme prendra en entrée un fichier contenant une liste d’instructions et simuler ces instructions en manipulant un 'arbre' stocké en mémoire.

## Fonctionnalités

- ls: Affiche la liste des noms des fils du nœud courant.
- cd chem: Déplace le programme au nœud indiqué par le chemin d'adresse "chem".
- cd: Ramène le programme à la racine.
- cd ..: Ramène le programme au nœud parent du nœud courant.
- pwd: Affiche le chemin du nœud où se trouve le programme.
- mkdir nom: Crée un nouveau nœud dossier fils du nœud courant avec le nom "nom".
- touch nom: Crée un nouveau nœud fichier fils du nœud courant avec le nom "nom".
- rm chem: Détruit le nœud et ses fils indiqués par le chemin d'adresse "chem".
- cp chem1 chem2: Copie le nœud et ses fils indiqués par le chemin d'adresse "chem1" vers le chemin d'adresse "chem2".
- mv chem1 chem2: Déplace le nœud et ses fils indiqués par le chemin d'adresse "chem1" vers le chemin d'adresse "chem2".
- print: Affiche le contenu de l'arbre avec les noms des nœuds, leur type (dossier ou fichier), le nom de leur père et la liste de leurs fils.}

## Utilisation
Avant de compiler, s'il existe des fichiers struct.o main.o, vous pouvez utiliser la commande suivante pour les supprimer :
```bash
make clean
```

Pour compiler le programme, utilisez la commande suivante :
```bash 
Make
```
## Execution
```bash 
./thanhchris testfiles/fichier_entree.txt
```

## Structure de Données
La structure de données manipulée par le programme sera imposée.

## Test
Des fichiers d’entrée test vous seront fournis pour évaluer le bon fonctionnement du programme.

## Auteur
- CHRISTOPHE AUREGLIA 22111766
- TANG THANH LONG 22110569


