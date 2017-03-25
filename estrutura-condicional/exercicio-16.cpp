#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
    
    float notaA, notaB, notaC, notaD;
    
    printf("Informe a nota A: ");
	scanf("%f", &notaA);
	
	printf("Informe a nota B: ");
	scanf("%f", &notaB);
	
	printf("Informe a nota C: ");
	scanf("%f", &notaC);
	
	printf("Informe a nota D: ");
	scanf("%f", &notaD);
	
	printf("A média harmonica das notas é %.2f", (4 / (1 / notaA) + (1 / notaB) + (1 / notaC) + (1 / notaD)));
	
	getch();
}
/*
16. Elabore um algoritmo que leia as seguintes notas de um aluno: a, b, c e d. O algoritmo deve imprimir a média harmônica.
4 / (1 / a) + (1 / b) + (1 / c) + (1 / d)
*/
