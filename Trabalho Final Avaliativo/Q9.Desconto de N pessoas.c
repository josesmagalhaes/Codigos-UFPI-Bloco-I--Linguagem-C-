/*
Refazer a quest�o 08, mas o algoritmo deve calcular o sal�rio de N pessoas, sendo que N � dado pelo usu�rio:

Sal�rio                                                     Percentual do desconto
Menor ou igual a R$ 600,00                                  Insento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00           20%
Maior que R$ 1200,00 e menor ou igual 2000,00               25%
Maior que R$ 2000,00                                        30%
*/


#include <stdio.h>


int main () {
	float salario, desconto;
	int i=0, n=0;
	
	printf ("Digite a quantidade de servidores a serem consultados: ");
	scanf ("%d", &n);
	
	while (i<n){
		printf ("Digite o salario bruto do servidor: ");
		scanf (salario);
	
		if (salario <=600.00){
			printf ("Insento!\n: ");
		}else if ((salario > 600.00)and(salario<=1200.00)){
			desconto=salario*0.2;
			printf ("O desconto do servidor e de R$: %.2f\n", desconto);
		}else if ((salario > 1200.00)and(salario<=2000.00)){
			desconto=salario*0.25;
			printf ("O desconto do servidor e de R$: %.2f\n", desconto);
		}else if (salario > 2000.00){
			desconto=salario*0.3;
			cout printf ("O desconto do servidor e de R$: %.2f\n", desconto);
		}
		
		i++;
	}
	
	return 0;
}
