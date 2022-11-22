#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int jour;
    int mois;
    int annee;
} date ;

typedef struct
{
    char nom[20];
    char prenom[20];
    date udate;
    int ucin;
    int role;
    int sexe;
    int bv;

} utilisateur;



int ajouter(char *filename, utilisateur p );
int modifier( char *filename, int id, utilisateur nov );
int supprimer(char *filename, int id );
int afficher(char *filename, int id);
int affecter (char *filename,int id);

#endif
