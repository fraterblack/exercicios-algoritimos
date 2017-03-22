#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    int numero;
    
    printf("Informe um número: ");
	scanf("%d", &numero);
	
	if (numero >= 20 && numero <= 90) {
		printf("O número informado ESTÁ entre 20 e 90");
	} else {
		printf("O número informado NÂO está entre 20 e 90");
	}
	
	getch();
}
/*
4. Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e 90, ou não.
*/
