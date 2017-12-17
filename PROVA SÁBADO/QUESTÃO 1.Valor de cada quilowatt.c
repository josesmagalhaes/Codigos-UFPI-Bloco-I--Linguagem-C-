/*
Sabendo que 100 quilowatts de energia custam um sétimo do salário mínimo, 
fazer um algoritmo que dados a valor do salário mínimo e a quantidade de 
quilowatts gastos por uma residência, exibir: valor em de cada quilowatt, 
valor da conta de energia e novo valordacontade energiaapósum descontode 10%.
*/

#include <stdio.h>

int main () {
	float salarioMinimo, qtdQuilowatt, valorQuilowatt, valorConta1, valorConta2;
	printf ("Digite a quantidade de quilowatts: ");
	scanf ("%f", &qtdQuilowatt);
	printf ("Digite o valor do salario minimo atual: ");
	scanf ("%f", &salarioMinimo);
	
	valorQuilowatt=salarioMinimo/7;
	valorConta1=qtdQuilowatt*valorQuilowatt;
	valorConta2=valorConta1*0.1;
	
	printf ("O valor de cada Quilowatt e: %.2f\n", valorQuilowatt);
	printf ("O valor da conta de energia e: %.2f\n", valorConta1 );
	printf ("O valor da conta com reajuste e %.2f\n", valorConta2);
	
	return 0;
	
}
