/*
Fazer um algoritmo em que o usu�rio forne�a o n�mero
do dia da semana. O algoritmo deveexibironomedo dia da 
semana paraon�merodigitado. Exemplo:01=Domingo.
*/
 
#include<stdio.h>

int main () {
	int dia;
	printf ("Digite um dia da semana: ");
	scanf ("%d", &dia);
	
	switch (dia){
		case 1: printf ("Domingo\n");break;
		case 2: printf ("Segunda-feira\n");break;
		case 3: printf ("Terca-feira\n");break;
		case 4: printf ("Quarta-feira\n");break;
		case 5: printf ("Quinta-feira\n");break;
		case 6: printf ("Sexta-feira\n");break;
		case 7: printf ("Sabado\n");break;
		default: printf ("Dia invalido!");		
	}
				
	return 0;
}
