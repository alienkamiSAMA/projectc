#include "electorale.h"
#include<stdio.h>
int ajouter(electorale e , char liselect [])
{
    FILE * f=fopen(liselect, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %d %d %d %d %d %d %d \n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id_tete, electorale nouv, char * liselect)
{
electorale e;
    FILE * f=fopen(liselect, "r");
    FILE * f2 =fopen("liselect.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %d %d %d %d %d %d \n",&e.id_liste,e.genre,e.orientation,&e.id_tete,&e.id1,&e.id2,&e.id3,&e.d.j,&e.d.m,&e.d.a)!=EOF)
{
if(e.id_tete!=id_tete)
        fprintf(f2,"%d %s %s %d %d %d %d %d %d %d\n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a);
else

  fprintf(f2,"%d %s %s %d %d %d %d %d %d %d\n",nouv.id_liste,nouv.genre,nouv.orientation,nouv.id_tete,nouv.id1,nouv.id2,nouv.id3,nouv.d.j,nouv.d.m,nouv.d.a);

}
        fclose(f);
        fclose(f2);
remove(liselect);
rename("liselect.txt", liselect);
        return 1;
    }
 
}

int supprimer(int id_liste, char * liselect)
{
electorale e;
    FILE * f=fopen(liselect, "r");
    FILE * f2 =fopen("liselect.txt", "w+");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %d %d %d %d %d %d\n",&e.id_liste,e.genre,e.orientation,&e.id_tete,&e.id1,&e.id2,&e.id3,&e.d.j,&e.d.m,&e.d.a)!=EOF)        

{
if(e.id_liste!=id_liste)
        fprintf(f2,"%d %s %s %d %d %d %d %d %d %d\n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a);

}
        fclose(f);
        fclose(f2);
remove(liselect);
rename("liselect.txt", liselect);
        return 1;
    }
}

electorale chercher(int id_liste, char * liselect)
{
electorale e; int tr=0;
    FILE * f=fopen(liselect, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %d %d %d %d %d %d %d\n",e.id_liste,e.genre,e.orientation,e.id_tete,e.id1,e.id2,e.id3,e.d.j,e.d.m,e.d.a)!=EOF && tr==0)
{if(e.id_liste==e.id_liste)
tr=1;
}
}
if(tr==0)
e.id_liste=-1;
return e;

}

