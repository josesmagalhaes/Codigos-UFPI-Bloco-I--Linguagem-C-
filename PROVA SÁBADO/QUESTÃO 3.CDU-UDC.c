/*
Dado um número inteiro no formato CDU, exibir o número no formato UDC. 
Exemplo: 123, será321. O número deverá ser atribuído a uma variável antes 
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
