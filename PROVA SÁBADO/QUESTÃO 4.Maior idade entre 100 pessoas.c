/*
Fazer um algoritmo que permita ao usu�rio digitar as idades de 100 pessoas.
Ap�s os n�meros serem digitados,o programa deve exibir a maior idade digitada.
*/

#include <stdio.h>

int main () {
	int idade, i, maior;
	
	printf ("Digite uma idade: ");
	scanf ("%d", &idade);
	
	i=1;
	maior=idade;
	while (i<3){
		printf ("Digite uma idade: ");
		scanf ("%d", &idade);
		if (idade>maior){
			maior=idade;
		}
		i++;
	}
	printf ("A maior idade e: %d", maior);
	
	return 0;
}
