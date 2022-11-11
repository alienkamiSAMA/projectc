#include "utilisateur.h"
#include <stdio.h>
#include <string.h>

void saisie (utilisateur *p)
{
    printf("donner le nom d'electeur ");
    scanf("%s",(*p).nom);
    printf("donner le prenom d'electeur ");
    scanf("%s",(*p).prenom);
    printf("donner la date de naissance d'electeur ");
    scanf("%d%d%d",&(*p).udate.jour,&(*p).udate.mois,&(*p).udate.annee);
    printf("donner le cin d'electeur ");
    scanf("%d",&(*p).ucin);
    printf("donner le role d'electeur:\n 0:electeur\n 1:agent du bureau\n 2:admin\n");
    scanf("%d",&(*p).role);
    printf("donner le sexe d'electeur:\n 0:femme\n 1:homme\n");
    scanf("%d",&(*p).sexe);


}

int ajouter(char *filename, utilisateur *p )
{

    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",(*p).nom,(*p).prenom,(*p).udate.jour,(*p).udate.mois,(*p).udate.annee,(*p).ucin,(*p).ucin,(*p).ucin,(*p).role,(*p).sexe);
        fclose(f);

        return 1;
    }
    else return 0;
}
int modifier( char *filename, int ucin1, utilisateur p )
{
    int tr=0;
    int x,x1;
    utilisateur p1;
    if(p.ucin== ucin1){
    tr=1;
    do{
    printf("\n0:nom\n1:prenom\n2:date de naissance\n3:cin\n4:role\n5:sexe\n");
    scanf("%d",&x);
    switch(x)
     {

            case 0:
            {    printf("nom\n");
                 scanf("%s",&p1.nom);
                 break;

            }
            case 1:
            {
                printf("prenom\n");
                 scanf("%s",&p1.prenom);
                 break;
            }
            case 2:
                {
                printf("donner la date de naissance d'electeur ");
                scanf("%d%d%d",&p1.udate.jour,&p1.udate.mois,&p1.udate.annee);
                break;
                }
            case 3:
                {
                    printf("donner le cin d'electeur ");
                    scanf("%d",&p1.ucin);
                    break;
                }
            case 4:
                {
                     printf("donner le role d'electeur:\n 0:electeur\n 1:agent du bureau\n 2:admin\n");
                     scanf("%d",&p1.role);
                     break;
                }
            case 5:
                {
                    printf("donner le sexe d'electeur:\n 0:femme\n 1:homme\n");
                    scanf("%d",&p1.sexe);
                    break;
                }
            default:
                printf("choix invalide");


     }
     printf("modification terminer?:0:Y/1:N\n");
     scanf("%d",&x1);
    }while(x1==1);


    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe)!=EOF)
        { if (tr==1){

                fprintf(f2,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p1.nom,p1.prenom,p1.udate.jour,p1.udate.mois,p1.udate.annee,p1.ucin,p1.ucin,p1.ucin,p1.role,p1.sexe);
                fclose(f);

                   }

         else{

                fprintf(f2,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe);
                fclose(f2);
             }
    }
    }


    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
}
int supprimer(char * filename, int ucin2)
{
    int tr=0;
    utilisateur p;


    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe)!=EOF)
        {
            if(p.ucin== ucin2)
                tr=1;


           else
                fprintf(f2,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("electeur.txt", filename);
    return tr;
}
int afficher(char *filename, int ucin3,utilisateur p)
{

    int tr,x=0;

    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe)!=EOF)
        {
              if(p.ucin== ucin3)
                tr=1;

        }
    } fclose(f);


    if(tr==0)
        x=-1;
    return x;

}
int affecter(char *filename, int ucin4,utilisateur p)
{

    int tr,x=0;

    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe)!=EOF)
        {
              if(p.ucin== ucin4){
                printf("num de bureau de vote :");
                scanf("%d",p.bv);
                tr=1;

        }
    } fclose(f);


    if(tr==0)
        x=-1;
    return x;

}



}

