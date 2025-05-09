/*
	Name: Média
	Author: Gabriel "Montanha"
	Date: 04/04/25 
	Description: Código p/ calcular a média da nota de 5 alunos
*/

#include <stdio.h>

main()
{
	float n1, n2, n3, n4, n5;
	n1 = n2 = n3 = n4 = n5 = 0;
	float med = 0;
	
	printf("Digite n1: ");
	scanf("%f", &n1);	
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	printf("Digite n3: ");
	scanf("%f", &n3);
	
	printf("Digite n4: ");
	scanf("%f", &n4);
	
	printf("Digite n5: ");
	scanf("%f", &n5);
	
	med = (n1+n2+n3+n4+n5)/5;
	printf("A media da sala eh:%.2f", med);
	
} //Fim do pograma