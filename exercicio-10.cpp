#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	int A;
	int B;
	int aux;

	printf("Informe A (Inteiro): ");
	scanf("%i", &A);
	
	printf("Informe B (Inteiro): ");
	scanf("%i", &B);
	
	aux = A;
	A = B;
	B = aux;
	
	printf("Valor de A: %i \n", A);
	
	printf("Valor de B: %i", B);
	
	getch();
}

/*
10.Elabore um algoritmo que leia dois valores para as vari�veis A e B, efetue a troca dos valores de
forma que a vari�vel A passe a ter o valor da vari�vel B, e que a vari�vel B passe a ter o valor da
vari�vel A. Ao final, imprima os valores com a troca efetuada.
*/
