#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2, soma;
    
    printf("Informe primeiro número: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo número: ");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	if (soma > 10) {
		printf("Número %d \n", soma);
	}
	
	getch();
}
/*
3. Elabore um algoritmo que leia dois números inteiros e efetue a adição; caso o resultado seja maior que 10,
imprima-o.
*/
