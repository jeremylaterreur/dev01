// Jeremy Camberlin 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
		
char prenom[30]="";
char meilleureleve[30]="";
char pireeleve[30]="";
int compare=2;
float note=0;
float meilleurenote=20;
float pirenote=0;
int i=0;
int compteureleve=0;
float moyenne=0;
float cumulnote=0;
int fin=0;

while (!fin)
{
	
	printf("\nTapez le prenom de l'eleve :\n");	
    scanf(" %[^\n]",prenom);
   	compare=strcmp(prenom,"X AE A-XII");
   	
   	if (compare==0)
   		{
   			printf("\nPrenom invalide, Arret du programme\n");
   			return 0;
		}

	do
		{
   		printf("Tapez la note de l'eleve :\n");
    	scanf("%f",&note);
		} while ((note<0)||(note>20));

	if (note<=pirenote)
		{
			memset(pireeleve, ' ',99);
			i=0;
			pirenote=note;
			while (prenom[i]!='\0')
				{
					pireeleve[i]=prenom[i];
					i++;
				}
		}
	
	if (note>=meilleurenote)
		{
			memset(meilleureleve, ' ',99);
			i=0;
			meilleurenote=note;
			while (prenom[i]!='\0')
				{
					meilleureleve[i]=prenom[i];
					i++;
				}
		}

	compteureleve++;
	cumulnote=cumulnote+note;
	moyenne=cumulnote/compteureleve;
	
	printf("\nLa meilleure note est : %.2f detenue par : %s \n",meilleurenote,meilleureleve);
	printf("La pire note est : %.2f detenue par : %s \n",pirenote,pireeleve);
	printf("La moyenne de la classe est : %f\n",moyenne);
}
	
	return 0;
}

