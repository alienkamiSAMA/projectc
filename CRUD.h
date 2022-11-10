#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
#include<string.h>
typedef struct{
int jour ; 
int mois ; 
int annee;
}Date;
typedef struct {
int id;
char Municipalite[50];
int NbrH;
int NbrC;
Date date;
}election;
int ajouter(char * filename, election e );
int modifier( char * filename, int ident, election e1 );
int supprimer(char * filename, int ident);
election chercher(char * filename, int ident);
#endif
