//Ex07
//Calcular a média de quatro números inteiros dados.

#include<stdio.h>
	int main(){
		int a, b, c, d;
		float media;
			printf("Digite o primeiro numero: ");
				scanf("%d", &a);
					printf("\nDigite o segudno numero: ");
						scanf("%d", &b);
							printf("\nDigite o terceiro numero: ");
								scanf("%d", &c);
									printf("\nDigite o quarto numero: ");
										scanf("%d", &d);
											media = (a + b + c + d) /4;
												printf("A media do numero eh : %0.2f", media);
	}
