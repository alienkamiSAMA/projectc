#include <stdio.h>
#include <string.h>
#include"utilisateur.h"

int main()
{
    char filename;
    utilisateur p1= {"ahmed","achahlaou",25,06,1999,2,1,1};
    utilisateur p2= {"ahmed","achah",20,06,1929,6,1,0}; /*fama saisie fi les maquettes but how to create a link between them*/
    int x;
    x=ajouter(filename,p1);

    if(x==1)
        printf("\najout d'utlisateur avec succés");
    else printf("\nechec ajout");

    x=ajouter(filename,p2);

    if(x==1)
        printf("\najout d'utlisateur avec succés");
    else printf("\nechec ajout");

    x=modifier(filename,1,p2 );

    if(x==1)
        printf("\nModification d'ulisateur avec succés");
    else printf("\nechec Modification");
    x=supprimer(filename,2 );
    if(x==1)
        printf("\nSuppression d'ulisateur  avec succés");
    else printf("\nechec Suppression");
    x=afficher(filename,0 );
    if(x==-1)
        printf("\nintrouvable");

       return 0;
}
