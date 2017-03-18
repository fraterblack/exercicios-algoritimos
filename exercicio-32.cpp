#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float medida;
    
    printf("Informe a medida em pés: ");
	scanf("%f", &medida);
	
	printf("A conversão da medida para polegadas é %.2f \n", (medida * 12));
	printf("A conversão da medida para jardas é %.2f \n", (medida / 3));
	printf("A conversão da medida em milhas é %.2f \n", ((medida / 3)) / 1760);
	
	getch();
}

/*
32. Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas
Elabore um algoritmo que receba uma medida em pés, faça as conversões a seguir, e imprima o resultado de cada conversão realizada.
a. polegadas
b. jardas
c. milhas
*/
