#include<stdio.h>


int
	base, expoente, potencia;

int main () {

	base = 3;
	expoente = 0;

	while (expoente <= 15) {

		if (expoente == 0) {

			potencia = 1;

		} else {

			if (expoente == 1) {

				potencia = base;

			} else {

				potencia *= base;

			}

		}

		printf("%d elevado a %d é %d.\n", base, expoente, potencia);

		expoente += 1;

	}

}


