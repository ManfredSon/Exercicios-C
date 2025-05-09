/*
	Name: Diagonais Matriz
	Author: Gabriel "Montanha"
	Date: 07/04/2025 
	Description: Programa p/ carregar uma matriz 3x3 e em seguida ler os elementos que estão na
Diagonal Principal, Diagonal Secundária e os que estão acima da Diagonal Principal
*/

#include<stdio.h> //Standard Input Output

main()
{
	int i, j;
	int mat[3][3]; // matriz quadrada de ordem 3
	i = j = 0;
	int ordem = 3;
	
	//Mostrando por linha
	puts("Digite os elementos para carregar na matriz: ");
	puts("Em ordem por linha: ");
	
	do
	{
		do
		{
			printf("[%d][%d]", i, j);
			scanf("%d", &mat[i][j]);
			j++;
			
		}while(j < 3);
	
	
	j = 0;
	i++;	
	}while(i < 3);
	
	
	
	//Mostrando DP
	i = 0;
	j = 0;
	puts("\n\n===> Elementos da Diagonal Principal (DP): ");
	while(i < 3)
	{
		while(j < 3)
		{
			if(i == j)
				printf("|%d", mat[i][j]);
				
			j = j + 1;
		}
	j = 0;
	i = i + 1;
	}
	
	//Mostrando DS
	i = j = 0;
	puts("\n\n===> Elementos da Diagonal Secundaria (DS): ");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i+j == ordem-1)
				printf("|%d", mat[i][j]);
	
	//Mostrando acima da dp
	i = j = 0;
	puts("\n\n===> Elementos Acima da Diagonal Principal (DP): ");
	do
	{
		while(j < 3)
		{
			if(i < j)
				printf("|%d", mat[i][j]);
			j = j + 1;
		}
	j = 0;
	i = i + 1;
	} while(i < 3);
	
} //fim do programa
