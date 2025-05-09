/*
	Name: Algoritmo de Escalonamento
	Author: Gabriel "Montanha"
	Date: 05/04/2025 
	Description: Programa p/ simular algoritmo de escalonamento FCFS (First Come First Served)
*/


#include <stdio.h>
main()
{
	int i=1;
	int tmpross [5];
	int tmesp [5];
	int tempex;
	int tempinic[5];
	int total; 
	float media;
 
	//Usuario digita tempo do processo
	do
	{
		printf("Insira o tempo dos processamentos \nP%d:", i);
		scanf("%d", &tmpross [i]);
		i++;
	}while (i < 6);
 
	//Usuario digita tempo de espera do processo
	i=1;
	do
	{
		printf("Insira o tempo de espera \nP%d:", i);
		scanf("%d", &tmesp [i]);
		i++;
	}while (i < 6);
 
	
	//Usuario digita tempo inicial(tempinic) do processo
	i =1;
	do
	{
		printf("Insira o tempo inicial dos processos \nP%d:\n", i);
		scanf("%d", &tempinic [i]);
		i++;
	}while (i < 6);
	i = 1;
 
	
 
	
	//Calculo do tempo médio  de execução
	i=1;
	total = 0;
	tempex = 0;
	for (i = 1; i < 6; i++ )
	{
		tempex  = tmpross [i] + tempinic [i];
		total = total + tempex;

	}
	
		printf("\nTempo de execucao:P:" "%d", total );

}
 
 