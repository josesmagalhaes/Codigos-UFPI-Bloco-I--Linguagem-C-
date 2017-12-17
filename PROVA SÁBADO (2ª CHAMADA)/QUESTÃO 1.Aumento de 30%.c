/*
Uma empresa decide dar um aumento de 30% aos funcionários com
salários inferiores a R$900,00. Faça um programa em que seja 
digitado o salário de um funcionário e mostre o valor do salário
reajustado.
*/

#include<stdio.h>

int main () {
	float salario,salarioReajustado;
	printf ("Digite o valor do salario do servidor: ");
	scanf ("%f", &salario);
	if (salario>900.00){
		salarioReajustado=salario+(salario*0.30);
		printf ("O valor do salario com aumento e: R$ %.2f\n", salarioReajustado);
	}else{
		printf ("Servidor nao tem direito a reajuste!");
	}
	
	return 0;
}
