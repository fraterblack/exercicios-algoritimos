#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float peso1, peso2;
    char nome1[30];
	char nome2[30];
    
    printf("Informe nome pessoa 1: ");
	scanf("%s", &nome1);
	
	printf("Informe peso da pessoa 1: ");
	scanf("%f", &peso1);
	
	printf("Informe nome pessoa 2: ");
	scanf("%s", &nome2);
	
	printf("Informe peso da pessoa 2: ");
	scanf("%f", &peso2);
	
	if (peso1 > peso2) {
		printf("%s está mais gordinho(a)", nome1);
	} else if (peso1 == peso2) {
		printf("Ambos estão gordinhos(as)");
	} else {
		printf("%s está mais gordinho(a)", nome2);
	}
	
	getch();
}
/*
10. Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da pessoa mais gorda.
*/
