/*
Dado um n�mero inteiro no formato CDU, exibir o n�mero no formato UDC. 
Exemplo: 123, ser�321. O n�mero dever� ser atribu�do a uma vari�vel antes 
de ser exibido.
*/

#include <stdio.h>

int main () {
	int num, c,d,u, udc;
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	c=num/100;
	d=(num % 100)/10;
	u=(num % 100)%10;
	
		
	printf ("A ordem inversa do numero e: %d%d%d", u,d,c);
	return 0;
}
