/*
Faça um programa que receba a idade de um nadador 
e mostre sua categoria, usando as regras a seguir. 
Para idade inferior a 5, o programa deverá mostrar 
uma mensagem de erro.

Categoria                   Idade 
Infantil                    5 a 7  
Infanto-Juvenil             8 a 10 
Juvenil                     11 a 15 
Adulto                      16 a 30 
Master                      Acima de 30
*/

#include <stdio.h>

int main () {
	int idade;
	printf ("Digite a idade do competidor: ");
	scanf ("%d", &idade);
	if (idade<5){
		printf ("ERRO! Idade inválida!");
	}else
		if ((idade>=5)and(idade<=7)){
			printf ("Infantil!");	
	}else
		if ((idade>=8)and(idade<=10)){
			printf ("Infanto-Juvenil");	
	}else
		if ((idade>=11)and(idade<=15)){
			printf ("Juvenil!");
	}else
		if ((idade>=16)and(idade<=30)){
			printf ("Adulto!");
	}else
		if (idade>30){
			printf ("Master!");
	}
	
	return 0;
}
