/*
 ============================================================================
 Name        : ex2.c
 Author      : Lucas S Q Pardo 11201720490
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa(double lado1,double lado2){
	double result;
	double hip;
	result = lado1*lado1 + lado2*lado2;
	hip = sqrt(result);
	return hip;
}

int main(void) {
	double a, b;
	double hip;

	scanf("%lf%lf", &a, &b);

	hip = hipotenusa(a,b);
	printf("Hipotenusa: %lf\n", hip);

	return EXIT_SUCCESS;
}
