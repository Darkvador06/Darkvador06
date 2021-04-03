/*-------------------------------------------*
 *          MON PREMIER PROGRAMME            *
 *         CREATION D'UNE FONCTION           *
 *       D'ECRITURE // Eddy BLONDEAU         *
 ------------------------------------------- */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int ma_fonction(char fonction)
	{
	fonction = 'z';
	return fonction;
	}
int main(void)
	{
	int initialisation;
	initialisation = ma_fonction(initialisation);
	//write(1,&initialisation,1);
	int i = 2;
	if( i == 6)
	{
		write(1,&initialisation,1);
	}
	else if( i == 2)
	{
	write(1, &initialisation,1);
	}
	else
	{
		printf("la valeur ne correspomd pas");
	}
	return(0);
	}
