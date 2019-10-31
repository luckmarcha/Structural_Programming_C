/*
 ============================================================================
 Questao2.c
 Implemente a função calc_esfera
 que calcula a área da superfície e
 o volume de uma esfera de raio R.
  ---- na tela ----
 10
1256.64 4188.79
 ==== ========================================================================
 */

#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main(void) {
	float r;
	float area=0;
	float volume=0;
	scanf("%f", &r);
	calc_esfera(r, &area,&volume);
	printf("%.2f %.2f\n", area, volume );
	return 0;
}


void calc_esfera(float R, float *area, float *volume){
/*digite aqui sua resposta*/
/* A = 4 * PI * R^2 */
/* V = 4/3 * PI * R^3 */
	*area = 4 * M_PI * pow(R,2);
	*volume = (float) 4/3 * M_PI * pow(R,3);

}
