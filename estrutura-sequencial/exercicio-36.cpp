#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero, controleTabuada;
    
    printf("Informe um n�mero: ");
	scanf("%d", &numero);
	
	controleTabuada = 1;
	while (controleTabuada <= 10) {
		printf("%d x %d = %d \n", numero, controleTabuada, (numero * controleTabuada));
		
		controleTabuada++;
	}
	
	getch();
}

/*
36. Elabore um algoritmo que calcule e mostre a tabuada de um n�mero informado pelo usu�rio.
*/
