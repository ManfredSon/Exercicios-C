/*  Programa: LoopInfinito.cpp
	Autor: Gabriel "Montanha"
	Data: Criado em 24:02:2025
	Descrição: Programa criado para demonstrar a implementação do 
				Loop infinito com "While"
*/

#include <stdio.h>

main()
{
	int num = 0;
	
	while(1)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		
		if(num == 0)
			break;
			
	}
	
	puts("Fim do programa");
	
	
	
	
}
