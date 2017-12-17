/*
Faça um algoritmo que para uma função genérica 
f(x) = e dados os valores dos coeficientes a, b
e c e um valor para x, exibir o valor de f(x)

*/

#include<stdio.h>
#include<stdlib.h>
int main () {
	float a, b,c, x, funcaox;
	printf ("Digite os valores de A, B, e C respectivamente: ");
	scanf ("%f %f %f", &a, &b, &c);
	printf ("Digite um valor para x: ");
	scanf ("%f", &x);
	
	funcaox= a*x*x+b*x+c;
	printf ("A funcao F(x) e: %.1f\n", funcaox);
	system ("PAUSE");
	return 0;
}
