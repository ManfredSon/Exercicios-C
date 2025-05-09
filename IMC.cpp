/*  Programa: IMC
	Autor: Gabriel "Montanha"
	Data: Criado em 24:02:2025
	Descrição: Programa criado para demonstrar a implementação do 
				Laço de Repetição "While" com Tomada de Decisão
*/

#include <stdio.h>
#include <conio.h>
main()
{
	int peso 	  = 0;
	float altura  = 0;
	float imc     = 0.0;
	int cont      = 0;
	int tecla 	  = 0;
	
	puts("Calculo do IMC para as pessoas");
	
	while (cont < 3) //Iniício While
	{
		printf("\n%da pessoa:\n", cont+1);
		printf("Peso: ");
		scanf("%d", &peso);
		printf("Altura:");
		scanf("%f", &altura);
		imc =  peso / (altura * altura);
		printf("Seu IMC eh: %.4f\n", imc);
		
		
		//Aninhamento condicional "Ninho de Ifs"
		if(imc<16)
			puts("Extremamente magro");
		else if (imc < 17)
				puts("Muito abaixo do peso");
			else if( imc<18.5)
					puts("Abaixo do peso");
				else if (imc < 25.0)
						puts("Normal");
					else if(imc<30)
							puts("Acima do peso");
						else if(imc < 35)
								puts("Obesidade - grau I");
							else if(imc < 40)
									puts("Obesidade - grau II");
								else
									puts("Obesidade Mórbida"); //Fim IFs
		puts("Pressine qualquer tecla para continuar... ");
		tecla = getch();
		printf("Voce pressionou a tecla %c - ASCII: %d", tecla, tecla);
		cont++;
				
		
	} //Fim While
	
	
	
	
	
	
}//fim do programa