/*
Dados os valores do sal�rio m�nimo e o sal�rio 
de uma pessoa, exibir quantos sal�rios m�nimos 
essa pessoa ganha.

*/

#include<stdio.h>
#include<stdlib.h>
int main () {
	float salario_minimo, salario_servidor, quant_salarios;
	printf ("Digite o salario minimo a ser verificado: ");
	scanf ("%f", &salario_minimo);
	printf ("Digite o salario do servidor: ");
	scanf ("%f", &salario_servidor);
	
	quant_salarios=salario_servidor/salario_minimo;
	printf ("O funcionario ganha %.2f salarios minimos\n", quant_salarios);
	system ("PAUSE");
	return 0;
}
