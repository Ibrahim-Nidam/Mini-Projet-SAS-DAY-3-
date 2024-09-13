#include <stdio.h>
#include <string.h>


int main (){
    int choix;
    int n;
    float note,noteMax = 0.0,noteMin = 20.0;
    char nom[30], prenom[30],nomM[30],prenomM[30],nomMin[30],prenomMin[30];
    int eleMo = 0;
    float moyenC;
    float noteTotalEle = 0;
    int nomEle = 0;

    do {
        printf("============Menu Principal============\n");
        printf("1-Entrez un étudient\n");
        printf("2-Affiché le moyen du classe\n");
        printf("3-Affiché l'étudient avec la meilleur note et l'étudient avec le pire note\n");
        printf("4-La somme d'étudient avec une note supérieur au moyen\n");
        printf("5-Quitter\n");

        printf("Entrez votre choix :  ");
        scanf(" %d",&choix);

    switch(choix){
        case 1:
            do{
                printf("\n");
                printf("Entrez le nom d'étudient : ");
                scanf(" %s",nom);
                printf("Entrez le prénom d'étudient : ");
                scanf(" %s",prenom);
                printf("Entrez la note d'étudient : ");
                scanf(" %f",&note);
                printf("Entrez 1 pour ajoutez un autre ou 0 pour sortir : ");
                scanf(" %d",&n);

                noteTotalEle += note;
                nomEle++;

                moyenC = noteTotalEle / nomEle;

                if(note >= moyenC){
                    eleMo++;
                }

                if (note > noteMax){
                    strcpy(nomM,nom);
                    strcpy(prenomM,prenom);
                    noteMax = note;

                }
                if (note < noteMin){
                    strcpy(nomMin,nom);
                    strcpy(prenomMin,prenom);
                    noteMin = note;

                }
                    printf("\n\n");
            }while(n != 0);

        break;
        case 2:
            if(eleMo > 1){
                printf("\n");
                printf("La somme du classe est %.2f\n",noteTotalEle);
                printf("Le nombre des éléves dans la classe sont %d\n",nomEle);
                printf("La moyen du classe est %.2f\n",moyenC);
            }
                printf("\n\n");
        break;
        case 3:
            if(nomEle > 2){
                printf("\n");
                printf("L'éleve %s %s a eu la meilleur note du classe : %.2f\n",nomM,prenomM,noteMax);
                printf("L'éleve %s %s a eu le pire note du classe : %.2f\n",nomMin,prenomMin,noteMin);
            }
                printf("\n\n");
        break;
        case 4:
            if (nomEle > 1)
            {
                printf("\n");
                printf("La somme d'étudient qui en dépasser le moyen du classe : %.2f, sont %d\n",moyenC,eleMo);
            }
                printf("\n\n");
        break;
    }
    }while (choix != 5);
    
    return 0;
}