/*
Faça um algoritmo que informe a quantidade total de calorias
de uma refeição a partir da escolha do usuário que deverá 
informar o prato, a sobremesa e a bebida, conforme a tabelaaseguir:

PRATO                       SOBREMESA                    BEBIDA 
Vegetariano:180cal          Abacaxi:75cal                Chá:20cal 
Peixe:230cal                Sorvetediet: 110cal          Suco de laranja:70cal 
Frango:250cal               Moussediet:170cal            Suco de melão:100cal 
Carne:350cal                Mousse de chocolate:200cal   Refrigerantediet:65cal
*/

#include<stdio.h>


int main () {
	char prato, sobremesa, bebida;
	int p, s, b, total=0;
	
	printf ("Digite um prato: ");
	scanf ("%s", &prato);
	
	switch (prato){
		case 'v': p=180;break;
		case 'p': p=230;break;
		case 'f': p=250;break;
		case 'c': p=350;break;
	}
	
	printf ("Digite uma sobremesa: ");
	scanf ("%s", &sobremesa);
	
	switch (sobremesa){
		case 'a': s=75;break;
		case 's': s=110;break;
		case 'm': s=170;break;
		case 'c': s=200;break;
	}	
	
	printf ("Digite uma bebida: ");
	scanf ("%s", &bebida);
	
	switch (bebida){
		case 'c': b=20;break;
		case 'l': b=70;break;
		case 'm': b=100;break;
		case 'r': b=65;break;
	}

	total=p+s+b;
	
	printf ("Foram toalisadas: %d calorias!", total);
	
	return 0;
}
