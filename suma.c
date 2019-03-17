#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 6

void inicializa(int imatriz[Tam][Tam]);

int suma(int smatriz[Tam][Tam]);

int main(){
	int matriz[Tam][Tam];
	inicializa(matriz);
	int sumatriz = suma(matriz);
	printf("La matriz generada es:\n");
	for (int j = 0; j < Tam; j++){
		for (int i = 0; i < Tam; i++){
			if (matriz[i][j]==10)
			{
				printf("%d ", matriz[i][j]);
			}
			else{
				printf("%d  ", matriz[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("La suma de todos los terminos de la matriz es: %d\n", sumatriz);
	return 0;
}

void inicializa(int imatriz[Tam][Tam]){
	int random;
	srand(time(NULL));
	for (int j = 0; j < Tam; j++){
		for (int i = 0; i < Tam; i++){
			random = (1+(rand()%10));
			imatriz[i][j] = random;
		}
	}
}

int suma(int smatriz[Tam][Tam]){
	int suma = 0;
	for (int j = 0; j < Tam; j++){
		for (int i = 0; i < Tam; i++){
			suma = suma + smatriz[i][j];
		}
	}
	return suma;
}