#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero;
    
    printf("Informe um n�mero: ");
	scanf("%d", &numero);
	
	if (numero >= 20 && numero <= 90) {
		printf("O n�mero informado EST� entre 20 e 90");
	} else {
		printf("O n�mero informado N�O est� entre 20 e 90");
	}
	
	getch();
}
/*
4. Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e 90, ou n�o.
*/
