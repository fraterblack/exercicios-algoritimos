#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

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
	
	printf("A m�dia quadr�tica das notas � %.2f", (sqrt(pow(notaA, 2) + pow(notaB, 2) + pow(notaC, 2) + pow(notaD, 2) / 4)));
	
	getch();
}
/*
17. Elabore um algoritmo que leia as seguintes notas de um aluno: a, b, c e d. O algoritmo deve imprimir a m�dia quadr�tica:
raizQuadrada de a� + b� + c� + d� / 4
*/
