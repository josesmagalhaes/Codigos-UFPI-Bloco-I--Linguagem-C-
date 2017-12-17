/*
Faça um algoritmo que represente uma função f(x) = . O usuário deve
 fornecer os valores dos coeficientes a, b e c e um valor para x. 
 Ao final, o algoritmo deve exibir o valordef(x).
 */

#include <stdio.h>


int main () {
	float a, b, c, x, fx;
	printf ("Digite os valores de A, B e C respectivamente: ");
	scanf ("%f %f %f", &a,&b,&c);
	printf ("Digite um valor para X: ");
	scanf ("%f", &x);
	
	fx=a*x*x+b*x+c;
	
	printf ("O valor da funcao (fx) e: %.2f", fx);
	
	return 0;
	
}
