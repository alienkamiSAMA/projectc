#include "CRUD.h"

int ajouter(char * filename, election e )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d %d %d %d \n",e.id,e.Municipalite,e.NbrH,e.NbrC,e.date.jour,e.date.mois,e.date.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int ident, election e1 )
{
    int tr=0;
    election e ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("e1.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d %d ",&e.id,&e.Municipalite,&e.NbrH,&e.NbrC,&e.date.jour,&e.date.mois,&e.date.annee)!=EOF)
        {
            if(e.id== id)
            {
                fprintf(f2,"%d %s %d %d %d %d %d \n",e1.id,e1.Municipalite,e1.NbrH,e1.NbrC,e1.date.jour,e1.date.mois,e1.date.annee);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %d %d %d %d %d \n",e.id,e.Municipalite,e.NbrH,e.NbrC,e.date.jour,e.date.mois,e.date.annee);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("e1.txt", filename);
    return tr;

}
int supprimer(char * filename, int ident)
{
    int tr=0;
    election e ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("e1.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %d %d ",&e.id,&e.Municipalite,&e.NbrH,&e.NbrC,&e.date.jour,&e.date.mois,&e.date.annee)!=EOF)
        {
            if(e.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %d %d %d %d %d \n",e.id,e.Municipalite,e.NbrH,e.NbrC,e.date.jour,e.date.mois,e.date.annee);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("e1.txt", filename);
    return tr;
}
election chercher(char * filename, int ident)
{
    election e;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %d %d %d %d %d ",&e.id,&e.Municipalite,&e.NbrH,&e.NbrC,&e.date.jour,&e.date.mois,&e.date.annee)!=EOF)
        {
            if(e.id== iden)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        e.id=-1;
    return e;

}
