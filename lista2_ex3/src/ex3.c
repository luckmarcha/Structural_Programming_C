/*
 ============================================================================
 Name        : ex3.c
 Author      : Lucas S Q Pardo 11201720490
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "temperatura.h"
int main(void) {
	double c;
	double f;
	int i;
	for(i=0;i<=100; i++){
		f=cParaF(i);
		printf("F = %.3lf\t", f);
	}

	printf("\n\n\n\n");

	for(i=32;i<=212; i++){
		c=fParaC(i);
		printf("C = %.3lf\t", c);
	}



	return EXIT_SUCCESS;
}
