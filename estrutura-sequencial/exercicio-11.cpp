#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	float numero1;
	float numero2;

	printf("Informe primeiro n�mero: ");
	scanf("%f", &numero1);
	
	while(numero1 <= 0) {
		printf("Informe um n�mero maior que zero: ");
		
		scanf("%f", &numero1);
	}
	
	printf("Informe segundo n�mero: ");
	scanf("%f", &numero2);
	
	while(numero2 <= 0) {
		printf("Informe um n�mero maior que zero: ");
		
		scanf("%f", &numero2);
	}
	
	printf("Primeiro N�mero: %.2f \n", numero1);
	printf("Segundo N�mero: %.2f \n", numero2);
	printf("Soma: %.2f \n", (numero1 + numero2));
	printf("Subtra��o: %.2f \n", (numero1 - numero2));
	printf("Multiplica��o: %.2f \n", (numero1 * numero2));
	
	getch();
}

/*
11.Elabore um algoritmo que leia 2 n�meros (maiores que 0), e imprima os n�meros informados, a
soma, subtra��o do primeiro pelo segundo, multiplica��o, considerando a seguinte sa�da:
Primeiro N�mero:____ Segundo N�mero:____
Soma: ____
Subtra��o: ____
Multiplica��o: ____
*/
