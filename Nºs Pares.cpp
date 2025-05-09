/*
	Name: Nºs pares
	Author: Gabriel Montanha
	Date: 04/04/2025 
	Description: Programa para imprimir todos os números pares de 1 a 100
*/

#include <stdio.h>

main()
{
	int i =1;
	
	while (i<=100) //laço de repetição
	{
		if (i % 2 == 0)   //não coloque ";", isso irá desconectar o if com o printf
		printf("%d\n", i);
		i++;
	}
	
	
	
}//Fim do programa