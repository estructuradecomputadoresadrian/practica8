#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Tam 5

void inicializa(int imatriz[Tam][Tam]);

int main(){
	int matriz[Tam][Tam];
	inicializa(matriz);
	printf("La matriz es:\n");
	for (int j = 0; j < Tam; j++){
		for (int i = 0; i < Tam; i++){
			if (matriz[i][j] >= 10){
				printf("%d ", matriz[i][j]);
			}
			else{
				printf("%d  ", matriz[i][j]);
			}
			
		}
		printf("\n");
	}

	return 0;
}


void inicializa(int imatriz[Tam][Tam]){
	int random;
	srand(time(NULL));
	for (int j = 0; j < Tam; j++){
		for (int i = 0; i < Tam; i++){
			random = 3 + (rand()%13);
			imatriz[i][j] = random;
		}
	}
}



