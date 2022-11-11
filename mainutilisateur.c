#include <stdio.h>
#include <string.h>
#include"utilisateur.h"

int main()
{
    utilisateur p;
    int ucin1,ucin2,ucin3,ucin4,x,x1,x2,x3,x4,n,n1,n2;
    do{
    printf("votre choix:\3\n0:ajouter\n1:modifier\n2:supprimer\n3:afficher\n4:affecter\n ");
    scanf("%d",&n);
    do{
    switch (n){
    case 0:{
    saisie (&p);

    x=ajouter("point.txt",&p);

    if(x==1)
        printf("\najout d'electeur avec succes\n");
    else
        printf("\nechec ajout");
    break;
    }
    case 1:{
    printf("donner la cin d'etulisateur");
    scanf("%d",&ucin1);
    x1=modifier("electeur.txt",ucin1,p );


    if(x1==1)
        printf("\nModification d'electeur avec succes\n");
    else
        printf("\nechec Modification\n");

    printf("donner la cin d'etulisateur");
    scanf("%d",&ucin2);
    break;
    }
    case 2:{
    x2=supprimer("electeur.txt",ucin2 );
    if(x2==1)
        printf("\nSuppression de point avec succés\n");
    else
    printf("\nechec Suppression\n");


    break;
    }
    case 3:{
    printf("donner la cin d'utilisateur");
    scanf("%d",&ucin3);
    x3=afficher("electeur.txt",ucin3,p );
    if(x3==-1)
        printf("introuvable\n");
    else
        printf("trouvable\n");

    break;
    }
    case 4:{
    printf("donner la cin d'utilisateur");
    scanf("%d",&ucin4);
    x4=affecter("electeur.txt",ucin4,p);
    if(x4==-1)
        printf("introuvable\n");
    else
        printf("trouvable\n");



        break;
    }

}
printf("modification generale terminer?:0:Y/1:N\n");
scanf("%d",&n1);
}while(n1!=0);
printf("choix terminer?:0:Y/1:N\n");
scanf("%d",&n2);

}while(n2!=0);
return 0;
}
