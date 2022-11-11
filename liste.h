#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED


#include <stdio.h>
typedef struct Date
{
int j;
int m;
int a;
}date;

typedef struct listElec
{
date d;
char nomListe[50] ;
int candidat ;
int idenListe ;
int idenTeteliste ;
int numListe ;
} listelec;

int ajouter_liste( char *liste , listelec L );
int modifier_liste( char *liste , int idenListe , listelec nouv );
int supprimer_liste( char *liste , int idenListe );
listelec chercher_liste( char *liste , int idenListe );


#endif // FONCTION_H_INCLUDED
