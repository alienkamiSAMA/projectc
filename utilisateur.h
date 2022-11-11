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
    int bv;
    int ucin;
    int role;
    int sexe;

} utilisateur;


void saisie (utilisateur *p);
int ajouter(char *filename, utilisateur *p );
int modifier( char *filename, int ucin1, utilisateur p );
int supprimer(char *filename, int ucin2 );
int afficher(char *filename, int ucin3,utilisateur p);
int affecter (char *filename,int ucin4 ,utilisateur p);

#endif

