#include<stdio.h>
#include<conio.h>
#include<locale.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float nota1, nota2, nota3, media;
    
    printf("Informe nota 1: ");
	scanf("%f", &nota1);
	
	printf("Informe nota 2: ");
	scanf("%f", &nota2);
	
	printf("Informe nota 3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 10;
	
	printf("A m�dia do aluno �: %.2f", media);
	
	getch();
}

/*
17. Elabore um algoritmo que leia 3 notas de um aluno, calcule e mostre a m�dia aritm�tica entre elas.
*/
