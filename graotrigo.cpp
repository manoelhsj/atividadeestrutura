#include<stdio.h>

int
	quadro;

float
	trigo, trigo_total;

int main () {

	quadro = 1;
	trigo = 1;
	trigo_total = trigo;

	while (quadro <= 64) {

		quadro += 1;
		trigo *= 2;
		trigo_total += trigo;

	}

	printf("No tabuleiro tem: %.0f graos de trigo.\n", trigo_total);

}


