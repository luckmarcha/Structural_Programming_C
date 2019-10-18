/*
 * menorDe3.c
 *
 *  Created on: 4 de out de 2019
 *      Author: Lucas S Q Pardo
 */

#include "menorde3.h"

int menorDe3(int a, int b, int c){
	int menor;
	menor = a;
	if(b<=menor){
		menor = b;
	}
	if(c<=menor){
		menor = c;
	}

	return menor;
}

