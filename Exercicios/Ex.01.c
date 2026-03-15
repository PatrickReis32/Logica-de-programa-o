//Exercicio 01
//Ler um número inteiro e mostrar.

#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL, "Portuguese");
			int numero;
				printf("Digite um numero inteiro?\n");
					scanf("%d", &numero);
						printf("o numero é: %d", numero);
	}
	
