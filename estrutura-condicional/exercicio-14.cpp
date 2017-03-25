#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    bool divisivel;
    
    printf("Informe o primeiro número: ");
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
		printf("O número é divisível por 10, 5 e 2 ao mesmo tempo");
	} else {
		printf("O número NÃO é divisível por 10, 5 e 2 ao mesmo tempo");
	}
	
	getch();
}
/*
14. Elabore um algoritmo que leia um número e informe se ele é divisível por 10, por 5 e por 2 (ao mesmo tempo), ou não.
*/
