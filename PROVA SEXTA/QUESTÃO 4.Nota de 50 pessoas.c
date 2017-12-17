/*
Fazer um algoritmo que permita ao usuário digitar as notas de 50 pessoas.
 Apósos números serem digitados,o programa deve exibir a maior nota.
*/

#include<stdio.h>


int main () {
	float nota, maior=0;
	int i;
	
	printf ("Digite uma nota: ");
	scanf ("%f", &nota);
	
	i=1;
	maior=nota;
	
	while (i<50){
		printf ("Digite uma nota: ");
		scanf ("%f", &nota);
		if (nota>maior){
			maior=nota;
		}
	i++;
	}
	
	printf ("A maior nota digitada e: %.1f", maior);
	
	return 0;
}
