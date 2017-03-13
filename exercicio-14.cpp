#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	float numero;

	printf("Informe número: ");
	scanf("%f", &numero);
	
	while(numero <= 0) {
		printf("Informe um número maior que zero: ");
		
		scanf("%f", &numero);
	}
	
	//printf("O número %.2f ao quadrado é: %.2f \n", numero, ());
	//printf("O número %.2f ao cubo é: %.2f \n", numero, ());
	printf("A raiz quadrada de %.2f é: %.2f \n", numero, sqrt(numero));
	//printf("A raiz cúbida de %.2f é: %.2f \n", numero, ());
	
	getch();
}

/*
14.Elabore um algoritmo que leia um número positivo maior que 0, calcule e mostre:
a. O número informado ao quadrado
b. O número informado ao cubo
c. A raiz quadrada do número informado
d. A raiz cúbica do número informado
*/
