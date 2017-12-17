/*
Um endocrinologista deseja controlar a saúde de seus pacientes e,
para isso, se utiliza do Índice de Massa Corporal (ICM).
Sabendo-se que o IMC é calculado através da seguinte :

fórmula: Onde: peso é dado em Kg; altura é dada em metros.

Criar um algoritmo que apresente o nome do paciente, seu IMC e sua faixa de risco, conforme a seguinte tabela:

IMC                          FAIXA DE RISCO
Abaixo de 20                 Abaixo do peso
A partir de 20 até 25.       Normal
Acima de 25 até 30.          Excesso de peso
Acima de 30até 35.           Obesidade
Acima de 35.                 Obesidade mórbida

*/

#include <stdio.h>
#include<stdlib.h>
int main () {
	float peso, altura, imc, mult;
	char nome[50];
	printf ("Digite o nome do paciente: ");
	gets (nome);
	printf ("Digite seu peso: ");
	scanf ("%f", &peso);
	printf ("Digite a altura do paciente: ");
	scanf ("%f", &altura);
	
	mult=altura*altura;
	imc=peso/mult;
	
if (imc < 20){printf ("O paciente %s esta com IMC  Dde %.2f: Abaixo do peso\n", nome, imc);}
else if ((imc >= 20) && (imc <= 25)){printf ("O paciente %s esta com IMC  de %.2f: Normal\n", nome, imc);}
else if ((imc >= 26) && (imc <= 30)){printf ("O paciente %s esta com IMC  de %.2f: Excesso de peso\n", nome, imc);}
else if ((imc >= 31) && (imc <= 35)){printf ("O paciente %s esta com IMC  de %.2f: Obesidade\n", nome, imc);}
else if (imc >= 36){printf ("O paciente %s esta com IMC  de %.2f: Obesidade morbida\n", nome, imc);} 
 system ("PAUSE");
return (0);
} 
