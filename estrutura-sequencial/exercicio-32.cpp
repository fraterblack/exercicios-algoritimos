#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float medida;
    
    printf("Informe a medida em p�s: ");
	scanf("%f", &medida);
	
	printf("A convers�o da medida para polegadas � %.2f \n", (medida * 12));
	printf("A convers�o da medida para jardas � %.2f \n", (medida / 3));
	printf("A convers�o da medida em milhas � %.2f \n", ((medida / 3)) / 1760);
	
	getch();
}

/*
32. Sabe-se que:
1 p� = 12 polegadas
1 jarda = 3 p�s
1 milha = 1760 jardas
Elabore um algoritmo que receba uma medida em p�s, fa�a as convers�es a seguir, e imprima o resultado de cada convers�o realizada.
a. polegadas
b. jardas
c. milhas
*/
