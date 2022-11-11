
#include <stdio.h>
#include <string.h>
#include "fonction.h"
int main()
{
listelec l1={{29,1,2001},"tunis",1111,2022,13499846,1};
listelec l2={{12,8,2000},"gabes",2222,2021,12345678,2};

   int x=ajouter_liste("liste.txt", l1);
    if(x==1)
        printf("\najout de point avec succes  ");
    else printf("\nechec ajout");

  int y=modifier_liste("liste.txt",2022,l2);
printf("*****");
    if(y==1)
        printf("\nModification de point avec succes ");
    else printf("\nechec Modification");



  /*  int z=supprimer_liste("liste.txt",2022);
    if(z==1)
        printf("\nSuppression de point avec succes ");
    else printf("\nechec Suppression");
  l3=chercher_liste("liste.txt",2022);
    if(l1.idenListe==-1)
        printf("introuvable");*/

        return 0 ;
}
