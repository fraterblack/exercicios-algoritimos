#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero1, numero2, soma;
    
    printf("Informe primeiro n�mero: ");
	scanf("%d", &numero1);
	
	printf("Informe segundo n�mero: ");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	if (soma > 10) {
		printf("N�mero %d \n", soma);
	}
	
	getch();
}
/*
3. Elabore um algoritmo que leia dois n�meros inteiros e efetue a adi��o; caso o resultado seja maior que 10,
imprima-o.
*/
