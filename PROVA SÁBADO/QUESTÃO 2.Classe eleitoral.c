/*
Fazer um algoritmo que informe a classe eleitoral de 
uma pessoa conforme a tabela abaixo.O usuário deve fornecer 
a idadeda pessoa. 

Idade                                          Classe Eleitoral 
abaixo de 16 anos                              nãoeleitor 
entre 18 e 65 anos                             eleitor obrigatório 
entre 16 e 18 anos ou maior que 65 anos        eleitorfacultativo 
*/

#include <stdio.h>

int main () {
	int idade;
	printf ("Digite a idade do individuo: ");
	scanf ("%d",&idade);
	
	if (idade < 16) {
		printf("Nao eleitor!");
	}else
		if ((idade >=18) and (idade<=65)){
			printf("Eleitor obrigatorio");
	}else
		printf("Eleitor facultativo!");
		
	return 0;
}
