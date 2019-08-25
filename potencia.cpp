#include <stdio.h>
#include <math.h>

	
int main(){ 
   
float a;
int b;

	printf("Informe um numero real para ser a base: ");
	scanf("%f", &a);
	printf("Informe um numero inteiro para ser o expoente: ");
	scanf("%d", &b);
	float result = pow(a, b);
	printf("Resultado: %.0f\n", result);
	
	
	return 0;
}
