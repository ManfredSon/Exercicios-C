/*
	Name: Elementos Vetor
	Author: Gabriel "Montanha"
	Date: 10/03/25 
	Description: Programa p/ apresentar elementos carregados em um vetor
*/

#include <stdio.h>
main() 
{
	int num [10];
	int i=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o %do numero:",i+1);
		scanf("%d",&num[i]);
	}
	i=0;
	while(i<10)
	{
		printf("%d|",num[i]);
		i++;
	}
} //fim do programa

