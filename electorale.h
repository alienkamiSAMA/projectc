#ifndef ELECTORALE_H_INCLUDED
#define ELECTORALE_H_INCLUDED
typedef struct {
int j;
int m;
int a;
}date;
typedef struct
{
  int id_liste;
  char genre;
  char orientation;
  int id_tete ;
  int id1;
  int id2;
  int id3;
  date d;
     
    
}electorale;

int ajouter(electorale e , char liselect []);
int modifier(int id, electorale nouv, char * liselect);
int supprimer(int id, char * liselect);
electorale chercher(int id, char * liselect);

#endif // ELECTORALE_H_INCLUDED





