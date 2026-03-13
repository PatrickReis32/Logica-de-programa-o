//EX14

#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL, "PORTUGUESE");
			float vha, inss, salbruto, salliquido, desconto;
				int nad;
					printf("Entre o valor da aula: ");
						scanf("%f", &vha);
							printf("\nEntre os dias de aula: ");
								scanf("%d", &nad);
									printf("\nDigite o valor de desconto inss: ");
										scanf("%f", &inss);
											salbruto = vha * nad;
												desconto = inss * salbruto / 100;
													salliquido = salbruto - desconto;
														printf("\nSeu salario bruto é R$ %.2f\nO desconto é R$ %.2f\nO salario liquido é R$ %.2f", salbruto, desconto, salliquido);
		}
