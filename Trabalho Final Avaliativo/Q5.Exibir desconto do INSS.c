/*
Dado o salário bruto de uma pessoa, exibir o desconto do INSS segundo a tabela abaixo:

Salário                                                     Percentual do desconto
Menor ou igual a R$ 600,00                                  Insento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00           20%
Maior que R$ 1200,00 e menor ou igual 2000,00               25%
Maior que R$ 2000,00                                        30%

*/

#include<stdio.h>
#include <stdlib.h>
int main () {
	float salario,desconto;
	printf ("Digite o valor do salario do Servidor: ");
	scanf ("%f", &salario);
	if (salario<=600.00){printf ("Insento\n");
	}
	else
		if ((salario>600.00)&&(salario<=1200.00)){
			desconto=salario*0.2;
			printf ("O valor deo desconto e: %.2f\n", desconto);
		}else
		if ((salario>1200.00)&&(salario<=2000.00)){
			desconto=salario*0.25;
			printf ("O valor do desconto e: %.2f\n", desconto);
			}else
			if (salario>2000.00){
				desconto=salario*0.3;
				printf ("O valor do desconto e: %.2f\n", desconto);
			}
	system ("PAUSE");
	return 0;		
}
