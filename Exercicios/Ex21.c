//EX21

#include<stdio.h>
#include<math.h>
#define PI 3.14

	int main(){
		float h, r, area_lateral, area_base, area_cilindro, litros, latas, custo;
			printf("Digite o valor da altura: ");
				scanf("%f", &h);
					printf("\nDigite o valor do raio: ");
						scanf("%f", &r);
							area_lateral = 2* PI * r * h;
								area_base = PI * pow(r , 2);
									area_cilindro = area_base + area_lateral;
										litros = area_cilindro / 3.0;
											latas = litros / 5.0;
												custo = latas * 50;
													printf("Quantidade de  latas = %.0f", custo);
							
		
		
	}
