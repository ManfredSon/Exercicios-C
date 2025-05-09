/*
	Name: Calcular Média
	Author: Gabriel "Montanha"
	Date: 03/03/2025
	Description: Programa p/ somar 5 números e depois calcular a média entre eles
*/


#include <stdio.h>
main()
{
	int num, soma, cont;
	float media;
	num = 0; soma = 0; media = 0.0; cont = 0;
	printf("Digite 5 numeros:\n");
	
	do {
		scanf("%d", &num);
		soma = soma + num;
		cont = cont + 1;
	} while (cont <5);
	
	media = soma / cont;
	printf("Total: %d\n", soma);
	printf("A media eh: %.2f", media);

} //fim do programa 