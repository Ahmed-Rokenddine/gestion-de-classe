#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
 

 int age( int jour, int mois, int anne){
    int jourj=16;
    int moisj=9;
    int annej=2022;
    int agejour;
    int agemois;
    int ageanne;
        if (jourj<jour)
        {
            moisj=moisj-1;
            jourj=jourj+30;
        }
        else 
        if (moisj<mois)
        {
            annej=annej-1;
            moisj=moisj+12;
        }
        else{}

        agejour=jourj-jour;
        ageanne=annej-anne;
        agemois=moisj-mois;
        printf("votre age est exactement %d jours et %d mois et %d ans",agejour,agemois,ageanne);
         
         return jour,mois,anne;

 }
 
 int main(){
    // fonction today - the day ur born 
    // struc fiha name--> (int day-int mois-in anne)
    // fonction de tri ( plus grand - plus petit - moyenne d'age)
        int jour,mois,anne;
            jour=21;
            mois=06;
            anne=2004;
            age(jour,mois,anne);
            
typedef struct 
 {
    char nom[10],prenom[10];
    int jour;
    int mois;
    int anne;
 }info;
 void fill(info etudiant )
 {
    printf("Quel est le nom de letudiant\n");
    scanf(" %s %s", etudiant.nom,etudiant.prenom);
    printf("Quel est sa date de naissance :\n");
    scanf(" %d / %d / %d ",&etudiant.jour,&etudiant.mois,&etudiant.anne);
 };
 int main(){
    int n,p,i;
 printf("whats the number of students:");
 scanf("%d",&n);
    struct *etudiants=calloc(n,) 

   for ( p = 0; p < n; i++)
   {
   void fill(struct etudiant p);
   }
 }