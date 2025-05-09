/*  Programa: Tabuada.cpp
	Autor: Gabriel "Montanha"
	Data: Criado em 24:02:2025
	Descrição: Programa criado para demonstrar a implementação do 
				Laço de Repetição "For" com Tomada de Decisão
*/

#include <stdio.h>>

main()
{
	int num, i;
	num = i = 0;
	
	printf("Digite um numero para calcular a tabuada\n");
	scanf( "%d", &num);
	
	//for (inicialização; teste condicional; iteração/incremento)
	for(i = 0; i <= 10; i++)
		printf("%d x %d = %d\n", num, i, num*i);
	
	
}//FIM DO CÓDIGO