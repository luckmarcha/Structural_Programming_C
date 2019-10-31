/*
 ============================================================================
 Questao1.c [2.5]
 Implemente a funcao inverteNumero que recebe um inteiro positivo
 e imprime os digitos na ordem inversa.
 Exemplo: para o inteiro 7657 a saída 7567:
 ----- na tela ------
 7657
 7567
 ============================================================================
 */

#include <stdio.h>

void inverteNumero(int n);

int main(void) {
	int numero_inteiro;
	int quantidade_de_sete;

	scanf("%d",&numero_inteiro);
	inverteNumero(numero_inteiro);


	return 0;
}

void inverteNumero(int n){
	/*Digite sua resposta aqui*/
	if (n/10 == 0)
		return;
	
	printf("%d", n%10);

	inverteNumero(n/10);

}
