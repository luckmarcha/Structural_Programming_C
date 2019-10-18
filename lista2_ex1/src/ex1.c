/*
 ============================================================================
 Name        : ex1.c
 Author      : Lucas S Q Pardo 11201720490
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menorde3.h"
int main (void){
	int a;
	int b;
	int c;
	int menor;

	scanf("%d%d%d", &a, &b, &c);
	menor= menorDe3(a,b,c);
	printf("%d", menor);

	return 0;
}
