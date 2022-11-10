#include "electorale.h"
#include<stdio.h>
int main()
{

electorale e1={1234,"homme","gauche",0000,5980,8901,4070,1,2,2022} ;
electorale e2={1356,"femme","droit",1111,1200,8985,4858,8,8,2022} ;



int x=ajouter (e1 ,"liselect.txt");
if(e1.id_tete==-1)
 printf("inexistant");
else
 printf("%d %s %s %d %d %d %d %d %d %d\n",e1.id_liste,e1.genre,e1.orientation,e1.id_tete,e1.id1,e1.id2,e1.id3,e1.d.j,e1.d.m,e1.d.a);
}




