/*
Fazer um algoritmo que permita ao usu�rio digitar
cada uma das notas de uma avalia��o de 50 alunos
de uma turma. Ap�s as notas serem digitadas, 
o programa deve exibir o valor da maior nota.
*/

#include<stdio.h>


int main () {
	float nota, maior;
	int i;
	printf ("Digite uma nota: ");
	scanf ("%f", &nota);
	
	i=1;
	maior=nota;
	
	while (i<50){
		printf ("Digite uma nota: ");
		scanf ("%f", &nota);
		if (nota>maior){
			maior=nota;
		}
	i++;
	}
	printf ("A maior nota e: %.1f", maior);
	
	return 0;
}
