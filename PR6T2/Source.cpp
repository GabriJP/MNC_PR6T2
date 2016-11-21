#include <cstdio>

#define MAX_THREADS 20

void BalanceoCarga(int Nth, int M, int *Pos, int *Num);

int main(int argc, char *argv[]){

	int Pos[MAX_THREADS], Num[MAX_THREADS];
	int Nth, M;

	Nth = 5;
	M = 8;
	printf("\nTaread: %d, Hilos:%d\n", M, Nth);
	BalanceoCarga(Nth, M, Pos, Num);
	for (int i = 0; i < Nth; i++){
		printf("Hilo: %d Numero: %d, Posicion: %d\n", i, Num[i], Pos[i]);
	}

	Nth = 7;
	M = 3;
	printf("\nTareas: %d Hilos: %d\n", M, Nth);
	BalanceoCarga(Nth, M, Pos, Num);
	for (int i = 0; i < Nth; i++){
		printf("Hilo: %d, Numero: %d, Posicion: %d\n", i, Num[i], Pos[i]);
	}

	Nth = 6;
	M = 100;
	printf("\nTareas: %d Hilos: %d\n", M, Nth);
	BalanceoCarga(Nth, M, Pos, Num);
	for (int i = 0; i < Nth; i++){
		printf("Hilo: %d, Numero: %d, Posicion: %d\n", i, Num[i], Pos[i]);
	}
	std::getchar();
	return 0;
}