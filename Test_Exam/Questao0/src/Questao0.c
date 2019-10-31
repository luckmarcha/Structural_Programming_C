/*
 ============================================================================
Questao0.c [2.0]
Implemnte a funcao troca, que recebe dois valores inteiros
e troca os valores de suas variáveis.
Exemplo. a=10 e b=20 a saída será a=20 e b=10;
---- na tela ---
a= 10
b= 20

a= 20
b= 10
============================================================================
 */

#include <stdio.h>

void troca(int *a, int *b);

int main(void) {
	int a;
	int b;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	troca(&a,&b);
	printf("\n");
	printf("a: %d\n",a);
	printf("b: %d\n",b);
	return 0;
}

void troca(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = *a;
	return;
}
