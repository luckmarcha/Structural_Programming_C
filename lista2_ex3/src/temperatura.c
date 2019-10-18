/*
 * temperatura.c
 *
 *  Created on: 4 de out de 2019
 *      Author: Lucas S Q Pardo
 */
double cParaF(int c){
	double f;
	f =(((9.0/5.0)*(double)c)+32.0);
	return f;
}

double fParaC(int f){
	double c;
	c = (5.0)*(((double)f-32.0)/9.0);
	return c;
}


