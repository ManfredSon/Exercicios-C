/*
	Name: Tabuada 1 ao 10
	Author: Gabriel "Montanha"
	Date: 04/04/2025
	Description: Código que recebe um nº do usuário e faz a tabuada dele até o 10

*/

#include <stdio.h>

main()
{
	int n = 0;  //nº do usuário
	int i = 1;  //1 a 10
	int result = 0;
	
	printf("Insira um número inteiro para calcular a tabuada\n");
	scanf("%d", &n);
	
	while(i<=10)
	{
		result = i*n;
		printf("%d X %d = %d\n", n, i, result);
		i++;
	}
	
	
}//fim do programa