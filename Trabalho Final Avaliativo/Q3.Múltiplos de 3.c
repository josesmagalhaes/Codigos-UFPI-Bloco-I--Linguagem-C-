/*
Dado um n�mero, informar se ele � ou n�o � m�ltiplo de 3.

*/

#include<stdio.h>
#include<stdlib.h>
int main () {
	int numero;
	printf ("Digite um numero a ser verificado: ");
	scanf ("%d", &numero);
	if ((numero % 3)==0){
		printf ("Numero e multiplo de 3!\n");
	}else{printf (" Numero nao e multiplo de 3!\n");}
	system ("PAUSE");
	return 0;
}
