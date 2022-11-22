#include "utilisateur.h"
#include <stdio.h>
#include <string.h>


int ajouter(char *filename, utilisateur p )
{

    FILE * f=fopen("filename.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d  login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe);
        fclose(f);

        return 1;
    }
    else return 0;
}
int modifier( char *filename, int id, utilisateur nouv )
{
utilisateur p;
    FILE * f=fopen("filename.txt", "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,&p.udate.jour,&p.udate.mois,&p.udate.annee,&p.ucin,&p.ucin,&p.ucin,&p.role,&p.sexe)!=EOF)
{
if(p.ucin!=id)
        fprintf(f2,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe);
else

 fprintf(f2,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",nouv.nom,nouv.prenom,nouv.udate.jour,nouv.udate.mois,nouv.udate.annee,nouv.ucin,nouv.ucin,nouv.ucin,nouv.role,nouv.sexe);

}
        fclose(f);
        fclose(f2);
remove("filename.txt");
rename("aux.txt","filename.txt");
        return 1;
    }

}
int supprimer(char *filename, int id )
{
utilisateur p;
    int tr;
    FILE * f=fopen("filename.txt", "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
    tr=0;
else
    {
while(fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,&p.udate.jour,&p.udate.mois,&p.udate.annee,&p.ucin,&p.ucin,&p.ucin,&p.role,&p.sexe)!=EOF)
{
if(p.ucin!=id){
        tr=1;
        fprintf(f2,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe);
}
else
        tr=0;

}
        fclose(f);
        fclose(f2);
remove("filename.txt");
rename("aux.txt", "filename.txt");


        return tr;
    }
}

int afficher(char *filename, int id)
{
utilisateur p; int tr=0;
    FILE * f=fopen("filename.txt", "r");
 if(f!=NULL )
    {
while(fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   id:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,&p.udate.jour,&p.udate.mois,&p.udate.annee,&p.ucin,&p.ucin,&p.ucin,&p.role,&p.sexe)!=EOF && tr==0)
{if(id==p.ucin)
tr=1;
}
}
if(tr==0)
p.ucin=-1;
return p.ucin;

}


int affecter (char *filename,int id)
{
    utilisateur p;
    int tr,x=0;

    FILE * f=fopen("filename.txt", "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"nom:%s   prenom:%s   date de naissance:%d/%d/%d   cin:%d login:%d    mot de passe:%d     role:%d     sexe:%d\n",p.nom,p.prenom,p.udate.jour,p.udate.mois,p.udate.annee,p.ucin,p.ucin,p.ucin,p.role,p.sexe)!=EOF)
        {
              if(p.ucin== id){
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
