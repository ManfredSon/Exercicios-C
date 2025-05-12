/*
	Name: RecursividaDireta1.c
	Author: Gabriel "Montanha"
	Date: 12/05/25
	Description: Programa p/ demonstrar o uso de funções recursivas diretas 
*/
#include<stdio.h>
 

void contagemRegressiva(int);  //prototipação

main()
{
	int num;
	num = 0;
	printf("Digite um numero para iniciar a contagem regressiva: ");
	scanf("%d", &num);
	contagemRegressiva(num);   //1º invoke
}//fim do programa
 
void contagemRegressiva(int x)   //função será utilizada como laço de repetição,
{								//realizará um laço de repetição sem utilizar nehuma das estruturas de repetição 
	if(x<=0)
	{
		printf("%d\n",x);
		puts("Fogo\n");
		return;
	}
	printf("%d\n", x);
	x--;
	contagemRegressiva(x); //invoke recursivo
	return;
}