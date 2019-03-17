#include <stdio.h>
#define Tam 9

void inicializa (int imatriz[Tam][Tam]);

void inicializa (int imatriz[Tam][Tam]){
	for (int i=0;i<Tam;i++){
		for (int i2=0;i2<Tam;i2++){
			if (i==i2){
				imatriz[i][i2]=1;
			}
			else{
				imatriz[i][i2]=0;
			}
		}
	}
}
int main(){
	int matriz[Tam][Tam];
	inicializa(matriz);
	for (int i=0;i<Tam;i++){
		for (int i2=0;i2<Tam;i2++){
			printf("%i ",matriz[i][i2]);
		}
		printf("\n");
	}
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

int suma(int smatriz[TamX][TamY]){
	int sumatriz[TamX][1];
	int sumacol = 0;
	for (int i = 0; i < TamX; i++){
		sumacol = sumacol + smatriz[TamX][1];
		sumatriz[TamX][|] = sumacol;
	}
	return sumatriz[TamX][1];
}