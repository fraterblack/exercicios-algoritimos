#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	float numero;

	printf("Informe n�mero: ");
	scanf("%f", &numero);
	
	while(numero <= 0) {
		printf("Informe um n�mero maior que zero: ");
		
		scanf("%f", &numero);
	}
	
	//printf("O n�mero %.2f ao quadrado �: %.2f \n", numero, ());
	//printf("O n�mero %.2f ao cubo �: %.2f \n", numero, ());
	printf("A raiz quadrada de %.2f �: %.2f \n", numero, sqrt(numero));
	//printf("A raiz c�bida de %.2f �: %.2f \n", numero, ());
	
	getch();
}

/*
14.Elabore um algoritmo que leia um n�mero positivo maior que 0, calcule e mostre:
a. O n�mero informado ao quadrado
b. O n�mero informado ao cubo
c. A raiz quadrada do n�mero informado
d. A raiz c�bica do n�mero informado
*/
