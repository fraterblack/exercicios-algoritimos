#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    bool divisivel;
    
    printf("Informe o primeiro n�mero: ");
	scanf("%d", &numero);
	
	divisivel = false;
	
	if (numero % 10 == 0) {
		if (numero % 5 == 0) {
			if (numero % 2 == 0) {
				divisivel = true;
			}
		}
	}
	
	if (divisivel) {
		printf("O n�mero � divis�vel por 10, 5 e 2 ao mesmo tempo");
	} else {
		printf("O n�mero N�O � divis�vel por 10, 5 e 2 ao mesmo tempo");
	}
	
	getch();
}
/*
14. Elabore um algoritmo que leia um n�mero e informe se ele � divis�vel por 10, por 5 e por 2 (ao mesmo tempo), ou n�o.
*/
