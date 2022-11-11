#include<stdio.h>
#include "fonction.h"
int ajouter_liste(char *liste, listelec L )
{
    FILE * f=fopen("liste.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %s %d %d %d %d \n",L.d.j,L.d.m,L.d.a,L.nomListe, L.idenTeteliste,L.idenListe,L.candidat,L.numListe) ;
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier_liste( char * liste, int idListe, listelec nouv )
{
    int tr=0;
    listelec L;
    FILE * f=fopen("liste.txt", "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d%d%d%s%d%d%d%d\n",&L.d.j,&L.d.m,&L.d.a,L.nomListe,&L.idenTeteliste,&L.idenListe,&L.candidat,&L.numListe)!=EOF)
        {
            if(L.idenListe == idListe)
            {
                fprintf(f2,"%d%d%d%s%d%d%d%d\n",nouv.d.j,nouv.d.m,L.d.a,nouv.nomListe,nouv.idenTeteliste,nouv.idenListe,nouv.candidat,nouv.numListe) ;
                tr=1;
            }
            else
                fprintf(f2,"%d%d%d%s%d%d%d%d\n",L.d.j,L.d.m,L.d.a,L.nomListe,L.idenTeteliste,L.idenListe,L.candidat,L.numListe) ;

        }
    }
    fclose(f);
    fclose(f2);
    remove(liste);
    rename("nouv.txt", liste);
    return tr;
}
int supprimer_liste(char * liste , int id)
{
    int tr=0;
    listelec L ;
    FILE * f=fopen("liste.txt", "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d%d%d%s%d%d%d%d\n",&L.d.j,&L.d.m,&L.d.a,L.nomListe, &L.idenTeteliste,&L.idenListe,&L.candidat,&L.numListe)!=EOF)
        {
            if( L.idenListe == id )
                tr=1;
            else
                fprintf(f2,"%d%d%d%s%d%d%d%d\n",L.d.j,L.d.m,L.d.a,L.nomListe, L.idenTeteliste,L.idenListe,L.candidat,L.numListe) ;
        }
    }
    fclose(f);
    fclose(f2);
    remove(liste);
    rename("nouv.txt", liste);
    return tr;
}
listelec chercher_liste(char * liste, int iden)
{
    listelec L;
    int tr;
    FILE * f=fopen("liste.txt", "r");
    if(f!=NULL)
    {
        while((tr==0) && (fscanf(f,"%d%d%d%s%d%d%d%d\n",&L.d.j,&L.d.m,&L.d.a,L.nomListe, &L.idenTeteliste,&L.idenListe,&L.candidat,&L.numListe)!=EOF))
        {

            if(L.idenListe== iden)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        L.idenListe=-1;
    return L;

}





















