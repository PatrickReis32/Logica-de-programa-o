//Ex04
//Ler nome, endereço e telefones e mostrá-los.

#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL, "portuguese");
			char nome[50], endereco[100], telefone[10];
				printf("Seu nome: ");
					scanf("%s", nome);
						printf("Seu endereço: ");
							scanf("%s", endereco);
								printf("Seu telefone: ");
									scanf("%s", telefone);
										printf("\nSeu nome: %s\nSeu endereço: %s\nSeu telefone: %s", nome, endereco, telefone);
	}
