//exercicio 2
//Ler dois números inteiros e mostrar.

#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL, "portuguese");
			int num1, num2;
				printf("Digite o primeiro numero: ");
					scanf("%d", &num1);
						printf("digite o segundo numero:");
							scanf("%d", &num2);
								printf("\nos valores digitados foram %d e %d: ", num1, num2);
	}
