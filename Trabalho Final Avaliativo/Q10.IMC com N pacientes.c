/*
Um endocrinologista deseja controlar a saúde de seus pacientes e,
para isso, se utiliza do Índice de Massa Corporal (ICM).
Sabendo-se que o IMC é calculado através da seguinte

fórmula: Onde: peso é dado em Kg; altura é dada em metros.

Criar um algoritmo que apresente o nome de vários pacientes,
o IMC e a faixa de risco de cada um, conforme a seguinte tabela:

IMC                          FAIXA DE RISCO
Abaixo de 20                 Abaixo do peso
A partir de 20 até 25.       Normal
Acima de 25 até 30.          Excesso de peso
Acima de 30até 35.           Obesidade
Acima de 35.                 Obesidade mórbida
*/


#include <stdio.h>


int main () {
	char nome[20];
	int n=0, i=0;
	float peso, imc, mult, altura;
	
	printf ("Digite a quantidade de pacientes a serem consultados: ");
	scanf ("%d", &n);
	
	while (i<n){
		printf ("Digite o nome do paciente: ");
		scanf ("%s", &nome);
		printf ("Digite a altura do paciente: ");
		scanf ("%f", &altura);
		printf ("Digite o peso: ");
		scanf ("%f", &peso);
	
		mult=altura*altura;
		imc=peso/mult;
	
		if (imc<20){
			printf ("O paciente %s esta com IMC de: %2.f portanto, Abaixo do peso\n", nome, imc);
		}else if ((imc >=20)and(imc<=25)){
			printf ("O paciente %s esta com IMC de: %2.f portanto, Normal\n", nome, imc);
		}else if ((imc > 25)and(imc<=30)){
			printf ("O paciente %s esta com IMC de: %2.f portanto, Excesso de peso\n", nome, imc);
		}else if ((imc > 30)and(imc<=35)){
			printf ("O paciente %s esta com IMC de: %2.f portanto, Obesidade\n", nome, imc);
		}else if (imc > 35){
			printf ("O paciente %s esta com IMC de: %2.f portanto, Obesidade morbida\n", nome, imc);
		}
	i++;
	}
	
	return 0;
}
