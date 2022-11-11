#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reclamation.h"

int main()
{
    struct reclamation c1= {1110, 12/11/2000,2,4,"azeertyugfsgvc",3},c2= {1110, 19/07/2003,2,5,"azeertyugfsgvc",3},c3;
    int x=ajouterrec("reclamation.txt", c1);
    if(x==1)
        printf("\najout de reclamation avec succés");
    else printf("\nechec ajout");

    x=modifierrec("reclamation.txt",1,c2 );

    if(x==1)
        printf("\nModification de reclamation avec succes");
    else printf("\nechec Modification");
    x=supprimerrec("reclamation.txt",1 );
    if(x==1)
        printf("\nSuppression de reclamation avec succes");
    else printf("\nechec Suppression");
    c3=chercherrec("reclamation.txt",3 );
    if(c3.Id==-1)
        printf("introuvable");
    return 0;
}


