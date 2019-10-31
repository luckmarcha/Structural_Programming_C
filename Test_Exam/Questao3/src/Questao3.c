/*
 ============================================================================
 Questao3.c [3.5]
 Implemente a função normVetor que recebe
 como argumento um vetor de inteiros positivos
 e o seu tamanho e retorna um vetor com os
 valores do vetor original normalizados
 entre 0 e 1.
 -- na tela --
 41 2 80 85 57 24 6 71 82 72
0.47 0.00 0.94 1.00 0.66 0.27 0.05 0.83 0.96 0.84

  ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

float* normVetor(int v[], int n);
int* geraVetor(int n);
void imprimeVetor(float v[], int n);

int main(void) {
	int *vetor_original = geraVetor(SIZE);
	float *vetor_normalizado = normVetor(vetor_original, SIZE);
	free(vetor_original);
	imprimeVetor(vetor_normalizado, SIZE);
	free(vetor_normalizado);
	return 0;
}

float* normVetor(int v[], int n){
/*Digite sua resposta aqui*/
	int i;
	int max = v[0];
	int min = v[0];	
	for(i=0; i<n; i++) {
		if (v[i] > max){ 
			max = v[i];
		}
		if(v[i] < min) {
			min = v[i];
		}
	}
	
	float *vetNorm = malloc(sizeof(float)*n);	

	for(i=0; i<n; i++){
		vetNorm[i] = (float) (v[i] - min) / (max - min);
	}
	
	return vetNorm;	
	
}

int* geraVetor(int n){
	int i;

	int* v=malloc(sizeof(int)*n);

	srand(100);

	for(i=0;i<n;i++){
		v[i] = 1+rand()%100;
		printf("%d ",v[i]);
	}
	printf("\n");

	return v;

}


void imprimeVetor(float v[] , int n){
	int i;
	for(i=0;i<n;i++)
		printf("%.2f ",v[i]);
	printf("\n");
}

