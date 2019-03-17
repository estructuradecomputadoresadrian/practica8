#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TamX 6
#define TamY 3

void inicializa(int imatriz[TamX][TamY]);
void sumaColumnas(int smatriz[TamX][TamY], int svector[TamX]);

int main(){
	int matriz[TamX][TamY];
	int vector[TamY];
	inicializa(matriz);
	//Imprimo la matriz
	printf("La matriz generada es:\n");
	printf("\n");
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){
			if(matriz[i][j]==10){
				printf("%d ", matriz[i][j]);
			}
			else{
				printf("%d  ", matriz[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	//Llamo a la funcion suma e imprimo la nueva matriz
	sumaColumnas(matriz, vector);
	int contador = 1;
	for (int i = 0; i < TamX; i++){
		printf("La suma de los valores de la columna %d es %d.\n",contador, vector[i]);
		contador++;
	}
	printf("\n");
	return 0;
}

void inicializa(int imatriz[TamX][TamY]){
	int random;
	srand(time(NULL));
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){
			random = (1+(rand()%10));
			imatriz[i][j] = random;
		}
	}
}

void sumaColumnas(int smatriz[TamX][TamY], int svector[TamX]){
	int sumacol;
	for (int i=0;i<TamX;++i){
		sumacol = 0;
		for (int j=0;j<TamY;++j){
			sumacol = sumacol+smatriz[i][j];
		}
		svector[i] = sumacol;
	}
}