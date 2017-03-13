#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

main () {
    setlocale(LC_ALL, "Portuguese");
     
    float nota1, nota2, nota3, pond1, pond2, pond3, media;
    
    printf("Informe nota 1: ");
	scanf("%f", &nota1);
	
	printf("Informe o peso nota 1: ");
	scanf("%f", &pond1);
	
	printf("Informe nota 2: ");
	scanf("%f", &nota2);
	
	printf("Informe o peso nota 2: ");
	scanf("%f", &pond2);
	
	printf("Informe nota 3: ");
	scanf("%f", &nota3);
	
	printf("Informe o peso nota 3: ");
	scanf("%f", &pond3);
	
	media = ((nota1 * pond1) + (nota2 * pond2) + (nota3 * pond3)) / 10;
	
	printf("A média ponderada do aluno é: %.2f", media);
	
	getch();
}

/*
19. Elabore um algoritmo que receba 3 notas, seus respectivos pesos, calcule e imprima a média
ponderada dessas notas.
*/
