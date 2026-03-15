//exercicio 3
//Ler um número inteiro e mostrar seu sucessor e seu antecessor.
	
#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL, "portuguese");
			int a, suc, ant;
				printf("Digite um numero: ");
					scanf("%d", &a);
						suc = a + 1;
							ant = a - 1;
								printf("\no seu numero é %d e seu sucessor é %d e o antecessor é %d", a, suc, ant);
	}
