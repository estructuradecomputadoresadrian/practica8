#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tam 26
#define Tam2 8
#define Tam3 9

void inicializa(char vectori[Tam]){
	for (int i = 0; i < Tam; i++)
	{
		vectori[i] = 'a' + i;
	}
}


int main (){
	srand(time(NULL));
	char vector[Tam];
	int vector2[Tam2];
	char final[Tam3];
	char repetidor;
	int repetir;
	do
	{
		printf("Generando contraseña al azar.\n");
		inicializa(vector);
		for (int i = 0; i < 8; i++)
		{
			vector2[i]=rand()%(26);
			final[i]='a' + vector2[i];
		}
		final[8] = '\0';
		printf("%s\n\n",final);
		do
		{
			printf("¿Quieres generar otra contraseña? (S ó N)\n");
			scanf(" %c",&repetidor);
			switch (repetidor){
			case 's':
			case 'S':
			printf("Repitiendo.\n\n");
			repetir = 1;
			break;
			case 'n':
			case 'N':
			printf("Cerrando.\n");
			repetir = 0;
			break;
			default:
			printf("Valor no especificado.\n");
			repetir = 3;
			break;
			}
		} while (repetir!=0 && repetir!=1);
		
	} while (repetir!=0);
	
	
	return 0;
}