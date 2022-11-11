#ifndef reclamation_H_INCLUDED
#define reclamation_H_INCLUDED
#include <stdio.h>

typedef struct
{
int jour;
int mois;
int annee;
}Date;

typedef struct
{
int Id;
 Date daterec ;
int Liste_elect_rec;
int num_bv;
char desc_rec [1000];
int type_rec;
}reclamation;


int ajouterrec(char *, reclamation);
int modifierrec(char *, int, reclamation);
int supprimerrec(char *,int);
reclamation chercher (char *, int);
#endif // RECLAMATION_H_INCLUDED
