#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
	float numero;

	printf("Informe n�mero real: ");
	scanf("%f", &numero);
	
	printf("A ter�a parte de %.2f �: %.2f \n", numero, (numero / 3));
	
	getch();
}

/*
13.Elabore um algoritmo que leia um n�mero real e imprima a ter�a parte desse n�mero.
*/
